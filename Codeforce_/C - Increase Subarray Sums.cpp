#include <bits/stdc++.h>
using namespace std;

int memo[5001][5001];
const int INF = 1e9;

void solve()
{
	int n, x; cin >> n >> x;
	vector<int> A(n);
	vector<int> Psum(1, 0);
	for (int& a : A)
	{
		cin >> a;
		Psum.push_back(Psum.back() + a);
	}
	vector<int> lensum(n + 1, -INF);
	lensum[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; i + j <= n; j++)
		{
			lensum[i] = max(lensum[i], Psum[i + j] - Psum[j]);
		}
	}

	for (int k = 0; k <= n; k++)
	{
		int ans = 0;
		for (int i = 0; i <= n; i++)
		{
			ans = max(ans, lensum[i] + x * min(i, k));
		}
		cout << ans << " ";
	}
	cout << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}