#include <bits/stdc++.h>
using namespace std;
int t,n;

int main()
{
	cin >> t;
	while (t--)
	{
		n = 7;
		vector<int> b(n);
		for (int& x : b) cin >> x;

		cout << b[0] << " " << b[1] << " " << b[6] - b[0] - b[1] << "\n";
	}
	return 0;
}