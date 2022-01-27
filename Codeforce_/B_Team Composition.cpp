#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;
	if (a < b) swap(a, b);
	int ans = min(min(a, b), (a + b) / 4);
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}