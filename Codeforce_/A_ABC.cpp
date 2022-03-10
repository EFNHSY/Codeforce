#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	string s; cin >> s;
	int cnt_1 = 0, cnt_0 = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == '0') cnt_0++;
		else cnt_1++;
	}

	if (s.size() >= 3)
	{
		cout << "NO\n";
	}
	else
	{
		if (s == "00") cout << "NO\n";
		else if (s == "11") cout << "NO\n";
		else cout << "YES\n";
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}