#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 1; i <= n; i++)
	{
		v[i - 1] = n - i + 1;
	}
	if (n == 3)
	{
		cout << "3 2 1\n1 3 2\n3 1 2\n";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			int j = i;
			int cnt = n;
			while (cnt--)
			{
				
				cout << v[j] << " ";
				j++;
				j = j % n;
				
			}
			cout << "\n";
		}
	}
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}