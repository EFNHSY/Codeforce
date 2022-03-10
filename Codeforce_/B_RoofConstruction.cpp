#include <bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n; cin >> n;
	int k = log2(n - 1);
	k = pow(2, k);
	vector<int> v(n);
	int idx = 0;
	for (int i = k - 1; i >= 0; i--)
	{
		v[idx++] = i;
	}
	for (int i = k; i < n; i++)
	{
		v[idx++] = i;
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