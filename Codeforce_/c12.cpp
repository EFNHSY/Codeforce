#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin >> s;
	vector<bool> visited(26, false);
	int ans = 0;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (visited[s[i] - 'a'])
		{
			ans += cnt - 1;
			visited.assign(26, false);
			cnt = 0;
		}
		else
		{
			cnt++;
			visited[s[i] - 'a'] = true;
		}
	}
	for (int i = 0; i < 26; i++)
	{
		if (visited[i]) ans++;
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}