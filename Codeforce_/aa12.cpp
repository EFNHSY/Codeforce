#include <bits/stdc++.h>
using namespace std;


void solve()
{
	long long a, b; cin >> a >> b;

	if (a == 0)
	{
		cout << "1\n";
		return;
	}
	else if (b == 0)
	{
		cout << a + 1 << "\n";
		return;
	}
	else
	{
		cout << a + 2 * b + 1 << "\n";
		return;
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}