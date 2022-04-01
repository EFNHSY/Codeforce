#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n, k; cin >> n >> k;
	vector<ll> v(n);
	for (ll& x : v) cin >> x;
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	ll ans = 0;
	for (int i = 0; i <= k; i++)
	{
		ans += v[i];
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}