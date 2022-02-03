#include <bits/stdc++.h>
#define ll long long
#define INF 1e18
using namespace std;

vector<ll> segTree;
vector<ll> a;

void update(int ptr, int s, int e, int i, ll value)
{
	if (i < s || e < i) return;
	if (s == e)
	{
		segTree[ptr] = value;
		return;
	}

	update(ptr * 2, s, (s + e) / 2, i, value);
	update(ptr * 2 + 1, (s + e) / 2 + 1, e, i, value);

	segTree[ptr] = min(segTree[ptr * 2], segTree[ptr * 2 + 1]);
}

int findLastIdx(int ptr, int l, int r, ll value)
{
	if(segTree[ptr] >= value) return r + 1;
	if (l == r) return l;

	if (segTree[ptr * 2] >= value) return findLastIdx(ptr * 2 + 1, (l + r) / 2 + 1, r, value);
	return findLastIdx(ptr * 2, l, (l + r) / 2, value);
}
void solve()
{
	int n, s;
	cin >> n >> s;
	a = vector<ll>(n + 1);
	segTree = vector<ll>(n * 4 + 40, INF);
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}

	for (int i = 1; i <= n; i++)
	{
		update(1, 1, n, i, a[i]);
	}

	int l = -1, r = -1;
	int ans = 0;

	for (int i = 1; i <= n; i++)
	{
		if (s + a[i] - a[i - 1] < 0) continue;
		int idx = findLastIdx(1, 1, n, a[i - 1] - s);
		if (idx - i > ans)
		{
			ans = idx - i;
			l = i, r = idx-1;
		}
	}
	if (!ans) cout << "-1\n";
	else cout << l << " " << r << "\n";
} 
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}