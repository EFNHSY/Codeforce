#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	int sum = 0;
	for (int& x : v)
	{
		cin >> x;
		sum += x;
	}
	if (sum == 0)
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";
	sort(v.begin(), v.end());
	if (sum > 0)
	{
		reverse(v.begin(), v.end());
	}
	
	for (auto u : v)
	{
		cout << u << " ";

	}cout << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}