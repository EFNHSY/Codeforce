#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
	ll n, s; cin >> n >> s;
	vector<ll> v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	pair<int, int> ans;
	int l = 1;
	for (int r = 1; r <= n; r++)
	{
		ll temp_s = s;
		for (int i=l;i<=r;i++)
		{
			if (temp_s + v[i] >= 0)
			{
				temp_s += v[i];
			}
			else
			{
				r++;
				l = r;
				break;
			}
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}