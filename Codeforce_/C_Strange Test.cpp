#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b; cin >> a >> b;

	int ans1 = 0,ans2=0;
	while (b > (a|b))
	{
		a = a | b;
		ans1++;
		ans2++;
	}

	ans1 += (b - a);
	ans2 += ((a | b) - b);

	cout << min(ans1, ans2) << "\n";
	

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}