#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll t, n, k, x;
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> k >> x;
		string s;
		cin >> s;
		string ans = "";
		x--;
		reverse(s.begin(), s.end());
		int i = 0;
		while (i < n)
		{
			if (s[i] == 'a') { ans += 'a'; i++; continue; }
			ll d = 0;
			while (i < n && s[i] == '*')
			{
				d += k;
				i++;
			}
			for (int i = 0; i < x % (d + 1); i++) ans += 'b';
			x /= (d + 1);
		}
		reverse(ans.begin(), ans.end());
		cout << ans << "\n";
	}
	return 0;
}