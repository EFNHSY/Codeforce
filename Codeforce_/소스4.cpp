#include <bits/stdc++.h>
#define  pii pair<int,int>
using namespace std;

vector<pii> factorize(int x) {
	vector<pii> ret;
	for (int i = 2; i * i <= x; i++) {
		if (x % i) continue;
		if (!ret.size() || ret.back().first != i) ret.emplace_back(i, 1);
		else ret.back().second++;
		x /= i;
	}
	if (x > 1) {
		if (!ret.size() || ret.back().first != x) ret.emplace_back(x, 1);
		else ret.back().second++;
	}
	return ret;
}
void solve()
{
	for (auto u : factorize(36))
	{
		cout << u.first <<" " <<u.second << "\n";
	}

}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}