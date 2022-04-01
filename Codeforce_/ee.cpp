#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> segTree;
vector<ll> arr;
const ll inf = 1e9;
vector<int> alpha[26];
void update(int ptr, int s, int e, int i, int diff)
{
	if (s > i || i > e) return;
	segTree[ptr] += diff;
	if (s ^ e)
	{
		update(ptr * 2, s, (s + e) / 2, i, diff);
		update(ptr * 2 + 1, (s + e) / 2 + 1, e, i, diff);
	}

}

ll sum(int ptr, int s, int e, int l, int r)
{
	if (s > r || e < l) return 0;
	if (l <= s && e <= r) return segTree[ptr];
	return sum(ptr * 2, s, (s + e) / 2, l, r) + sum(ptr * 2 + 1, (s + e) / 2 + 1, e, l, r);
}


void solve()
{
	int n; cin >> n;
	segTree = vector<ll>(4 * (n + 10));
	arr = vector<ll>(n + 10);
	//arr.push_back({ -inf});
	string s; cin >> s;
	
	for (int i = 0; i < n; i++)
	{
		alpha[s[i] - 'a'].push_back(i);
	}
	for (int i = 0; i < 26; i++)
	{
		sort(alpha[i].begin(), alpha[i].end());
		reverse(alpha[i].begin(), alpha[i].end());
	}
	for (int i = n; i >= 1; i--)
	{
		arr[n-i+1] = alpha[s[i-1] - 'a'].back(); alpha[s[i-1] - 'a'].pop_back();
		
	}
	
	ll ans = 0;

	for (int i = 1; i <= n; i++)
	{
		int j = arr[i];
		//cout << j << "\n";
		ans += sum(1, 1, n, j + 1, n);
		update(1, 1, n, j, 1);
	}
	cout << ans << "\n";
}
int main()
{
	solve();
	return 0;
}