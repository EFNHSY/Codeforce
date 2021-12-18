#include <bits/stdc++.h>
using namespace std;

long long t, n;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<long long> b(n + 1, 0);
		long long b_sum = 0;
		for (long long i = 1; i <= n; i++)
		{
			cin >> b[i];
			b_sum += b[i];
		}
		long long a_sum = b_sum / (n * (n + 1) / 2);
		if (b_sum % (n * (n + 1) / 2) != 0)
		{
			cout << "NO\n";
			continue;
		}
		
		vector<long long> a(n + 1, 0);
		a[1] = ((b[1] - b[n]) - a_sum) / (-n);
		for (long long i = 2; i <= n; i++)
		{
			a[i] = ((b[i] - b[i - 1]) - a_sum) / (-n);
		}
		bool flag = false;
		for (long long i = 1; i <= n; i++)
		{
			if (a[i] == 0)
			{
				cout << "NO\n";
				flag = true;
				break;
			}
		}
		if (flag) continue;
		cout << "YES\n";
		for (long long i = 1; i <= n; i++)
		{
			cout << a[i] << " ";
		}cout << "\n";
	}
	return 0;
}