#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;

inline ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<ll> a(n, 0);
		for (ll& x : a) cin >> x;
		ll x = 0, y = 0;
		for (int i = 0; i < n; i++)
		{
			if (i % 2) y = gcd(y, a[i]);
			else x = gcd(x, a[i]);
		}
		bool ok1 = true, ok2 = true;
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0 && a[i] % y == 0) ok1 = false;
			if (i % 2 == 1 && a[i] % x == 0) ok2 = false;
		}
		if (ok1)
		{
			cout << y << "\n";
		}
		else if (ok2)
		{
			cout << x << "\n";
		}
		else
		{
			cout << "0\n";
		}
	}
	return 0;
}