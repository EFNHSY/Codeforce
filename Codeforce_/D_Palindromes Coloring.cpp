#include <bits/stdc++.h>
using namespace std;

void solve()
{
	vector<int> alpha(26, 0);
	int n, k; string s;
	cin >> n >> k;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		alpha[s[i] - 'a']++;
	}
	int cntPairs = 0, cntOdd = 0;
	for (int c : alpha)
	{
		cntPairs += c / 2;
		cntOdd += c % 2;
	}
	int ans = 2 * (cntPairs / k);
	cntOdd += 2 * (cntPairs % k);
	if (cntOdd >= k)
	{
		ans++;
	}
	cout << ans << "\n";

}
int main()
{
	int t; cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}