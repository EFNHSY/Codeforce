#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s; cin >> s;
	stack<char> st;
	string s1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'A') st.push(s[i]);
		else
		{
			if (st.empty()) s1.push_back(s[i]);
			else st.pop();
		}
	}
	while (!st.empty())
	{
		s1.push_back(st.top());
		st.pop();
	}
	
	string ans;
	for (int i = 0; i < s1.size(); i++)
	{
		
		if (s1[i] == 'B')
		{
			if (!ans.empty())
			{
				if (ans.back() == 'B') ans.pop_back();
				else ans.push_back(s1[i]);
			}
			else
			{
				ans.push_back(s1[i]);
			}
		}
		else ans.push_back(s1[i]);
	}
	
	cout << ans.size() << "\n";

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}