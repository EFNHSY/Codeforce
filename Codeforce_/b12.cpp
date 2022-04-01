#include <bits/stdc++.h>
using namespace std;

void solve()
{

	int n; cin >> n;
	vector<int> v(n);
	for (int& x : v) cin >> x;
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	if (n == 1)
	{
		if (v[0] > 1)
		{
			cout << "NO\n";
			return;
		}
		else
		{
			cout << "YES\n";
			return;
		}
	}
	if (n > 1 && v[0] - v[1] >= 2)
	{
		cout << "NO\n";
		return;
	}
	cout << "YES\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}