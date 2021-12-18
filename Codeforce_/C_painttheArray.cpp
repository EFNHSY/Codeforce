#include <bits/stdc++.h>
using namespace std;

long long t, n;
inline long long gcd(long long a, long long b)
{
	return b ? gcd(b, a % b) : a;
}
int main()
{
	
	cin >> t;
	while (t--)
	{
		
		cin >> n;
		vector<long long> arr(n, 0);
		vector<bool> flag(n, false);
		for (long long& x:arr) cin >> x;
		long long x = 0, y = 0;
		for (int i = 0; i < n; i++)
		{
			if (i % 2)
			{
				y = gcd(y, arr[i]);
			}
			else
			{
				x = gcd(x, arr[i]);
			}
		}

		bool ok1 = true, ok2 = true;
		for (int i = 0; i < n; i++)
		{
			if (i % 2 == 0 && arr[i] % y == 0) ok1 = false;
			if (i % 2 == 1 && arr[i] % x == 0) ok2 = false;
		}
		if (ok2)
		{
			cout << x << "\n";
		}
		else if (ok1)
		{
			cout << y << "\n";
		}
		else
		{
			cout << "0\n";
		}
		
	}

	return 0;
}