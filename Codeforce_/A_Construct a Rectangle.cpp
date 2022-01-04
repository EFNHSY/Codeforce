#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t; cin >> t;
	ll a[3];
	while (t--)
	{
		cin >> a[0] >> a[1] >> a[2];
		sort(a, a + 3);
		if (a[0] == a[1])
		{
			if (a[2] % 2 == 0) cout << "YES\n";
			else cout << "NO\n";
			continue;
		}

		if (a[1] == a[2])
		{
			if (a[0] % 2 == 0) cout << "YES\n";
			else cout << "NO\n";
			continue;
		}

		if (a[0] + a[1] == a[2])
		{
			cout << "YES\n";
			continue;
		}

		cout << "NO\n";


	}
	return 0;
}