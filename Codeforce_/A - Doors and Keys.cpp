#include <bits/stdc++.h>
using namespace std;

bool alpha[26];
void solve()
{
	memset(alpha, false, sizeof(alpha));
	int n = 6;
	bool flag = true;
	for (int i = 0; i < n; i++)
	{
		char c; cin >> c;
		if ('a' <= c && c <= 'z')
		{
			alpha[c - 'a'] = true;
		}
		else if ('A' <= c && c <= 'Z')
		{
			if (alpha[c - 'A']) continue;
			else flag = false;
		}
	}
	if (flag) cout << "YES\n";
	else cout << "NO\n";
}
int main()
{
	int t; cin >> t;
	while(t--) solve();
	return 0;
}