#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	deque<int> q;
	int cur = 1;
	for (int i = 0; i < n; i++)
	{
		if (i>0&& s[i] == s[i - 1]) cur++;
		if (i > 0 && s[i] != s[i - 1]) {
			q.push_back(cur); cur = 1;
		}
	}
	q.push_back(cur);
	int ans = 0;
	while (!q.empty())
	{
		int tmp1 = q.front(); q.pop_front();
		ans++;
		if (tmp1 > 1)
		{
			
			continue;
		}
		else if (!q.empty())
		{
			int tmp2 = q.front(); q.pop_front();
			
			if (tmp2 > 1)
			{
				q.push_front(tmp2 - 1);
				continue;
			}
		}
		
	}
	cout <<  ans << "\n";
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}