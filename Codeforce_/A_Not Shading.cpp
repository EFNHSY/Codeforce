#include <bits/stdc++.h>
using namespace std;
int n,m,r, c;
char board[51][51];
void solve()
{
	int black = 0,white=0;
	cin >> n >> m >> r >> c;
	for(int i=1;i<=n;i++)
		for (int j = 1; j <= m; j++)
		{
			cin >> board[i][j];
			if (board[i][j] == 'B') black++;
		}

	if (black == 0) cout << "-1\n";
	else if (board[r][c] == 'B') cout << "0\n";
	else
	{
		for (int i = 1; i <= m; i++)
		{
			if (board[r][i] == 'B') {
				cout << "1\n";
				goto l1;
			}

		}
		for (int i = 1; i <= n; i++)
		{
			if (board[i][c] == 'B') {
				cout << "1\n";
				goto l1;
			}

		}
		cout << "2\n";
	}


l1:
	return;
}
int main()
{
	int t; cin >> t;
	while(t--) solve();
	return 0;
}