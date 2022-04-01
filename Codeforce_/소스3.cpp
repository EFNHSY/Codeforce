#include <bits/stdc++.h>
using namespace std;

char board[101][101];
struct P
{
	int ly, lx, ry, rx;
};
void solve()
{
	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> board[i][j];
		}
	}
	vector<P> ans;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (board[i][j]=='1')
			{
				if (i - 1 >= 1 && board[i-1][j]=='0')
				{
					ans.push_back({ i - 1,j,i,j });
					board[i][j] = '0';
				}
				else if (j - 1 >= 1 && board[i][j - 1] == '0')
				{
					ans.push_back({ i,j - 1,i,j });
					board[i][j] = '0';
				}
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (board[i][j] == '1')
			{
				cout << "-1\n";
				return;
			}
		}
	}
	cout << ans.size() << "\n";
	reverse(ans.begin(), ans.end());
	for (auto u : ans)
	{
		cout << u.ly << " " << u.lx << " " << u.ry << " " << u.rx << "\n";
	}cout << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}