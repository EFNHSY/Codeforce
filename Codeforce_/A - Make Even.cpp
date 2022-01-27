#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin >> s;
	if ((s[s.size() - 1] - '0') % 2 == 0)
	{
		cout << "0\n";
	}
	else
	{
		if ((s[0] - '0') % 2 == 0) {
			cout << "1\n";
			return;
		}
		else
		{
			for (int i = 0; i < s.size(); i++)
			{
				if ((s[i] - '0') % 2 == 0)
				{
					cout << "2\n";
					return;
				}
			}
		}
		cout << "-1\n";
	}


}
int main()
{
	int t; cin >> t;
	while(t--) solve();
	return 0;
}