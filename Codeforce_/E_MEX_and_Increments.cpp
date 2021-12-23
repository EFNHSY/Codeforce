#include <bits/stdc++.h>
#define ll long long

using namespace std;
int t, n;

int main()
{

	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> arr(n+1, 0);
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			arr[x]++;
		}

		stack<int> s;
		ll costsum = 0;

		for (int i = 0; i <= n; i++)
		{
			cout << costsum + arr[i] << " ";

			for (int j = 0; j < arr[i] - 1; j++) s.push(i);

			if (arr[i] == 0)
			{
				if (!s.empty())
				{
					costsum += i - s.top();
					s.pop();
				}
				else
				{
					for (int j = i + 1; j <= n; j++)
					{
						cout << "-1 ";
					}
					break;
				}
			}
		}
		cout << "\n";

	}

	return 0;
}