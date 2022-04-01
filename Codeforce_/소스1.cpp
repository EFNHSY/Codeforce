#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	string ans = "";
	int temp = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 2 == 1)
		{
			ans += '2';
			temp += 2;
		}
		else
		{
			ans += '1';
			temp += 1;
		}
		if (temp == n)
		{
			cout << ans << "\n";
			return;
		}
		else if (temp > n)
		{
			break;
		}
	}
	ans = "";
	temp = 0;
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 2 == 1)
		{
			ans += '1';
			temp += 1;
		}
		else
		{
			ans += '2';
			temp += 2;
		}
		if (temp == n)
		{
			cout << ans << "\n";
			return;
		}
		else if (temp > n)
		{
			break;
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}