
#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n,x,y=0,ans=0; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		y = max(x, y);
		if (i == y) ans++;
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
