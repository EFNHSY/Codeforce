#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long x, y; cin >> x >> y;

	while (x != y)
	{
		if (x > y)
		{
			long long temp = 0;
			x = x >> 1;
			while (x)
			{
				temp += (x & 1);
				temp >> 1;
				x << 1;
			}
			x = temp;
			cout << x;

		}
		else
		{

		}
	}

	cout << "YES\n";
	return 0;
}