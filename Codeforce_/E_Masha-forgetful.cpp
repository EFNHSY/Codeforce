#include <bits/stdc++.h>
using namespace std;

map<string, bool> have;
map<string, tuple<int, int, int>> pos;
void solve()
{
	int n, m; cin >> n >> m;
	vector<bool> dp(m + 1, false);
	vector<int> pr(m + 1);
	vector<string> cache;
	dp[0] = true;

	for (int i = 0; i < n; i++)
	{
		string s; cin >> s;
		for (int j = 0; j < m; j++)
		{
			string t;
			t += s[j];
			for (int k = 1; k <= 2; k++)
			{
				if (k + j >= m) break;
				t += s[j + k];

				if (!have[t])
				{
					cout << t << "\n";
					have[t] = true;
					pos[t] = { j,j + k,i };
					cache.push_back(t);
				}
			}
		}
	}
	string s; cin >> s;
	for (int i = 0; i < m; i++)
	{
		string t;
		t += s[i];
		for (int k = 1; k <= 2; k++)
		{
			
		}
	}
}
int main()
{
	int t;
	cin >> t;
	while(t--)solve();
	return 0;
}