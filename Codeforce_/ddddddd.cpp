#include <bits/stdc++.h>
#define MOD  998244353
using namespace std;

int x[200001];
int y[200001];

void solve()
{
	memset(x, 0, sizeof(x));
	memset(y, 0, sizeof(y));
	int n, m, k, q;
	cin >> n >> m >> k >> q;
	vector<vector<int>> v(n+1, vector<int>(m+1, 0));

	while (q--)
	{
		int a, b; cin >> a >> b;
		for (int i = 1; i <= n; i++) v[i][b] ++;
		for (int i = 1; i <= m; i++) v[a][i]++;
	}

	int max_ = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

		}
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}