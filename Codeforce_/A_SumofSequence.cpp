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

		int a1 = b[0], a2, a3;
		bool flag = false;
		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (b[i] + b[j] == b[n - 1] - b[0])
				{
					cout << a1 << " " << b[i] << " " << b[j] << "\n";
					flag = true;
					break;
				}
			}
			if (flag) break;
		}
	}
	return 0;
}