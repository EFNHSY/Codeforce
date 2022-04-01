#include <bits/stdc++.h>
#define ll_ long long
using namespace std;

const ll_ inf = 1e9+10;

void solve()
{
	int n; cin >> n;
	vector<ll_> a(n + 1);
	vector<ll_> b(n + 1);
	for (int i = 1; i <= n; i++)  cin >> a[i];
	for (int i = 1; i <= n; i++)  cin >> b[i];
	ll_ la=inf, lb=inf, ra=inf, rb=inf; // la : a[1] 에서 b[i]로 그은 것 , ra : a[n]에서 b[i]로 그은것
	ll_ ll = abs(a[1] - b[1]), lr = abs(a[1] - b[n]), rl = abs(a[n] - b[1]), rr = abs(a[n] - b[n]);
	for (int i = 1; i <= n; i++)
	{
		la = min(la, abs(a[1] - b[i]));
		lb = min(lb, abs(b[1] - a[i]));
		ra = min(ra, abs(a[n] - b[i]));
		rb = min(rb, abs(b[n] - a[i]));
	}

	ll_ ans = ll + rr;
	ans = min(ans, ll + ra + rb);
	ans = min(ans, rr + la + lb);
	ans = min(ans, la + lb + ra + rb);
	ans = min(ans, lr + rl);
	ans = min(ans, lr + lb + ra);
	ans = min(ans, rl + la + rb);
	cout << ans << "\n";
}
int main()
{
	long long t; cin >> t;
	while (t--) solve();
}