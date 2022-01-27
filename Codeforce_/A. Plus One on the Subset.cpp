#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, n;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> v(n, 0);
		for (int& x : v) cin >> x;
		int max_ = 0;
		int max_elem = *max_element(v.begin(), v.end());
		for (int i = 0; i < n; i++)
		{
			max_ = max(max_, max_elem - v[i]);
		}
		cout << max_ << "\n";

	}
	return 0;
}