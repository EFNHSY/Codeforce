#include <bits/stdc++.h>
#define INF 987654321123123
#define MOD 1000000000+7
#define ll long long
using namespace std;

long double board[101][101];
ll n, m, rb, cb, rd, cd;

bool isRange(ll y, ll x)
{
	if (y >= 1 && y <= n && x >= 1 && x <= m) return true;
	return false;
}
bool isRangeH(ll y)
{
	if (y >= 1 && y <= n) return true;
	return false;

}
bool isRangeV(ll x)
{
	if (x >= 1 && x <= m) return true;
	return false;
}

ll dfs(ll y, ll x, ll cnt, ll dy, ll dx,long double probability,long double k)
{
	
	ll ans = INF;
	if (y == rd || x == cd) {
		k += (probability / 100);
	}
	if (k>=1)
	{
		return cnt % MOD;
	}
	
	ll ny = y + dy;
	ll nx = x + dx;
	
	if (!isRange(y, x)) return INF;

	if (isRangeH(ny))
	{
		if (isRangeV(nx))
		{
			ans = min(ans, dfs(ny, nx, cnt + 1, dy, dx,probability,k))%MOD;
		}
		else
		{
			ans = min(ans, dfs(ny, x - dx, cnt + 1, dy, -dx,probability,k))%MOD;
		}
	}
	else
	{
		if (isRangeV(nx))
		{
			ans = min(ans, dfs(y - dy, nx, cnt + 1, -dy, dx,probability,k))%MOD;
		}
		else
		{
			ans = min(ans, dfs(y - dy, x - dx, cnt + 1, -dy, -dx,probability,k))%MOD;
		}
	}
	
	return ans;
}
int main()
{
	ll t; cin >> t;


	while (t--)
	{
		memset(board, 0, sizeof(board));
		int p;
		cin >> n >> m >> rb >> cb >> rd >> cd >> p ;
		cout << dfs(rb, cb, 0, 1, 1,p,0) << "\n";
	}

	return 0;
}