#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long a, b;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		if (a==1&& b==1) cout << "0\n";
		else if (a == 1 || b == 1) cout << "1\n";
		else cout << "2\n";
	}

	return 0;
}