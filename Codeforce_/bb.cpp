#include <bits/stdc++.h>
using namespace std;


void solve()
{
	int n; cin >> n;
	int cw = 0, ccw = 0, off = 0;
	bool _cw = false, _ccw = false;
	char before, next;
	string s; cin >> s;
	for (int i = 0; i < n; i++)
	{
		next = s[i];
		if (i)
		{
			before = s[i - 1];
		}
		else
		{
			before = s[n - 1];
		}
		if (before == '-' || next == '-')
		{
			off++;
		}
		else
		{
			if (before == '>') cw++;
			if (before == '<') ccw++;
		}
		if (before == '>')
		{
			_cw = true;
		}
		if (before == '<')
		{
			_ccw = true;
		}
	}
	if (_cw ^ _ccw) off += max(ccw, cw);
	cout << off << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}