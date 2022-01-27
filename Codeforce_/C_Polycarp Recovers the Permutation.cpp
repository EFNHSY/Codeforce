#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int& x : v) cin >> x;
	if (v[0] == n || v[n - 1] == n)
	{
		for (int i = n - 1; i >= 0; i--)
			cout << v[i] << " ";
		cout << "\n";
	}
	else
	{
		cout << "-1\n";
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}