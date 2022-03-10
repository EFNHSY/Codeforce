#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n+1);
	int idx = -1;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	for (int i = 1; i <= n; i++)
	{
		if (v[i] != i)
		{
			idx = i;
			break;
		}
	}

	if (idx == -1)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << v[i] << " ";
		}cout << "\n";
		return;
	}
	int idx2 = -1;
	
	for (int i = 1; i <= n; i++)
	{
		if (v[i] == idx)
		{
			idx2 = i;
			break;
		}
	}

	reverse(v.begin() + idx, v.begin() + idx2+1);

	for (int i = 1; i <= n; i++)
	{
		cout << v[i] << " ";
	}cout << "\n";

	
	

	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}