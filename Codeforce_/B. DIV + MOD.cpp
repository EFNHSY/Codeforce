#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int l, r, a; cin >> l >> r >> a;

	int ans = r / a + r % a;
	r = (r / a) * a - 1;
	if (r < l) {
		cout << ans << "\n";
		return;
	}
	ans = max(r / a + r % a, ans);
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}