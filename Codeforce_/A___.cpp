#include <bits/stdc++.h>
using namespace std;

char board[40][40];

int main()
{
	int t, n, k;
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 40; i++)
		{
			for (int j = 0; j < 40; j++)
			{
				board[i][j] = '.';
			}
		}
		cin >> n >> k;
		if (n < k)
		{
			cout << "-1\n";
		}
		else if (k > 3)
		{
			cout << "-1\n";
		}
		else
		{
			for (int i = 0; i < k; i++)
			{
				board[i][i] = 'R';
			}
			for (int i = 0; i < n; i++)
			{
				for (int j = 0; j < n; j++)
				{
					cout << board[i][j];
				}cout << "\n";
			}
		}
	}
	return 0;
}