#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t, n;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<ll> b(n + 1, 0);
		vector<ll> a(n + 1, 0);
		ll b_sum = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> b[i];
			b_sum += b[i];
		}

		ll k = n * (n + 1) / 2;
		if (b_sum % k != 0)
		{
			cout << "NO\n";
			continue;
		}

		ll a_sum = b_sum / k;

		bool flag2 = false;
		if (((b[1] - b[n] - a_sum) % n) == 0)
		{
			a[1] = (b[1] - b[n] - a_sum) / (-n);
		}
		else
		{
			flag2 = true;
		}

		for (int i = 2; i <= n; i++)
		{
			if (((b[i] - b[i-1] - a_sum) % n) == 0)
			{
				a[i] = (b[i] - b[i-1] - a_sum) / (-n);
			}
			else
			{
				flag2 = true;
			}
		}


	}
	return 9;
}