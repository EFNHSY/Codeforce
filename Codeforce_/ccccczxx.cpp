#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v;
	for (int i = 1; i <= n; i++)
	{
		v.push_back(i);
	}

	cout << "2\n";
	while (!v.empty())
	{
		if (v.size() == 2)
		{
			cout << v.back() << " "; v.pop_back();
			cout << v.back() << " "; v.pop_back();
			return;
		}
		int x1 = v.back(); v.pop_back();
		int x2 = v.back(); v.pop_back();
		int x3 = v.back(); v.pop_back();
		if ((x1 + x2) % 2 == 0)
		{
			cout << x1 << " " << x2 << "\n";
			v.push_back(x3);
			v.push_back((x1 + x2) / 2);
		}
		else
		{
			cout << x1 << " " << x3 << "\n";
			v.push_back((x1 + x3) / 2);
			v.push_back(x2);
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}