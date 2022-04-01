#include <bits/stdc++.h>
using namespace std;

char board[101][101];
vector<char> type[4] = { {'1','0','1','1','1','0'},{'0','1','1','1','0','1'} ,{'1','1','1','0','1','0'} ,{'0','1','0','1','1','1'} };
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

	for (int i = 1; i <= n-1; i++)
	{
		for (int j = 1; j <= m-1; j++)
		{
			int cnt = 0;
			for (int a = i; a <= i + 1; a++)
			{
				for (int b = j; b <= j + 1; b++)
				{
					if (board[a][b] == '1')
					{
						cnt++;
					}
				}
			}
			if (cnt == 3)
			{
				cout << "NO\n";
				return;
			}
		}
	}
	
	cout << "YES\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}