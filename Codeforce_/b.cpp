
#include <bits/stdc++.h>
using namespace std;

long long t, w, h;
int main()
{
	cin >> t;
	while (t--)
	{
		long long ans = 0;
		cin >> w >> h;
		long long k;
		vector<long long> a;
		for (long long i = 0; i < 2; i++)
		{
			cin >> k;
			for (long long j = 0; j < k; j++)
			{
				long long num; cin >> num;
				a.push_back(num);
			}
			ans = max(ans, (a[k - 1] - a[0]) * h);
			a.clear();
		}
		for (long long i = 0; i < 2; i++)
		{
			cin >> k;
			for (long long j = 0; j < k; j++)
			{
				long long num; cin >> num;
				a.push_back(num);
			}
			ans = max(ans, (a[k - 1] - a[0]) * w);
			a.clear();
		}
		cout << ans << "\n";

	}
	return 0;
}