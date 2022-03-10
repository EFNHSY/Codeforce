#include <bits/stdc++.h>
using namespace std;

bool isSymmetric(string s)
{
	int _size = s.size();

	for (int i = 0; i < _size / 2; i++)
	{
		if (s[i] != s[_size - i - 1]) return false;
	}
	return true;
}
void solve()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	if (k == 0) cout << "1\n";
	else if (isSymmetric(s)) cout << "1\n";
	else cout << "2\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}