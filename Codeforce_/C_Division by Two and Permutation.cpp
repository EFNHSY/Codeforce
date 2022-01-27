#include <bits/stdc++.h>
using namespace std;

bool chk[51];

void solve()
{
	int t;
	cin >> t;
	while (t--)
	{
		memset(chk, false, sizeof(chk));
		int n; cin >> n;
		vector<int> v(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		for (int i = 0; i < n; i++)
		{
			while (v[i]>0)
			{
				
				if (v[i] <= n)
				{
					
					if (!chk[v[i]])
					{
						
						chk[v[i]] = true; 
						break;
					}
				}
				v[i] /= 2;
			}
		}
		bool flag = true;
		for (int i = 1; i <= n; i++)
		{
			if (!chk[i])
			{
				
				flag = false;
				break;
			}
		}
		if (flag)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}
int main()
{
	solve();
	return 0;
}