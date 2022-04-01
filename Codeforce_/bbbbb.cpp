#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll dp[1001];
const ll MOD = 998244353;
ll gcd(ll a, ll b) {
	while (b != 0) {
		ll r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void solve()
{
	dp[2] = 1;
	dp[4] = 4;
	dp[6] = 36;

	int k = 4;
	for (int i = 8; i <= 1000; i += 2)
	{
		dp[i] = (dp[i - 2] * k * k) % MOD;
		k++;
	}

}
void solve1()
{
	int n; cin >> n;
	cout << dp[n] << "\n";
}
int main()
{
	solve();
	int t; cin >> t;
	while (t--) solve1();
	return 0;
}