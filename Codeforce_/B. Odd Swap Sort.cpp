#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> odd_v;
	vector<int> even_v;
	for (int i = 0; i < n; i++)
	{
		int x; cin >> x;
		if (x % 2 == 0) even_v.push_back(x);
		else odd_v.push_back(x);
	}

	bool flag = true;
	if (!even_v.empty())
	{
		for (int i = 0; i < even_v.size() - 1; i++)
		{
			if (even_v[i] > even_v[i + 1]) flag = false;
		}
		if (!flag)
		{
			cout << "NO\n";
			return;
		}
	}
	if (!odd_v.empty())
	{
		for (int i = 0; i < odd_v.size() - 1; i++)
		{
			if (odd_v[i] > odd_v[i + 1]) flag = false;
		}
		if (!flag)
		{
			cout << "NO\n";
			return;
		}
	}
	
	cout << "YES\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}