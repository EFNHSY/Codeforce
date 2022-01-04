#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int sum = 0;
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			int temp; cin >> temp;
			sum += temp;
		}

		if (sum % n == 0) cout << "0\n";
		else cout << "1\n";
	}
	return 0;
}