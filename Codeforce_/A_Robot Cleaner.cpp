#include <bits/stdc++.h>
#define INF 987654321
using namespace std;

int board[101][101];
int n, m, rb, cb, rd, cd;

bool isRange(int y, int x)
{
	if (y >= 1 && y <= n && x >= 1 && x <= m) return true;
	return false;
}
bool isRangeH(int y)
{
	if (y >= 1 && y <= n) return true;
	return false;

}
bool isRangeV( int x)
{
	if (x >= 1 && x <= m) return true;
	return false;
}

int dfs(int y, int x,int cnt,int dy,int dx)
{
	int ans = INF;
	if (y == rd || x == cd) return cnt;
	int ny = y + dy;
	int nx = x + dx;
	
	if (!isRange(y, x)) return INF;

	if (isRangeH(ny))
	{
		if (isRangeV(nx))
		{
			ans = min(ans,dfs(ny, nx, cnt + 1, dy, dx));
		}
		else
		{
			ans = min(ans,dfs(ny, x - dx, cnt + 1, dy, -dx));
		}
	}
	else
	{
		if (isRangeV(nx))
		{
			ans = min(ans,dfs(y-dy, nx, cnt + 1, -dy, dx));
		}
		else
		{
			ans = min(ans,dfs(y-dy, x - dx, cnt + 1, -dy, -dx));
		}
	}
	return ans;
}
int main()
{
	int t; cin >> t;
	

	while (t--)
	{
		cin >> n >> m >> rb >> cb >> rd >> cd ;
		cout << dfs(rb, cb, 0, 1, 1) << "\n";
	}

	return 0;
}