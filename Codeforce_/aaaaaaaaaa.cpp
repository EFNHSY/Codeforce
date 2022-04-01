#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	int ans = 0,zero=0,one=0;
	for (int i = 0; i < n-1; i++)
	{
		if (s[i] == '0' && s[i + 1] == '0') ans += 2;
	}
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0')zero++;
		else one++;
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}