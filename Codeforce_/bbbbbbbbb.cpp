#include <bits/stdc++.h>
using namespace std;

void solve()
{
	
	int n; cin >> n;
	
	vector<long long> v;
	long long k = 1;
	for (int i = 1; i <= n; i++)
	{
		if (k > 1e9)
		{
			cout << "NO\n";
			return;
		}
		v.push_back(k);
		k *= 3;
			
	}
	
	cout << "YES\n";
	for (auto u : v)
	{
		cout << u << " ";
	}cout << "\n";
	
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
}