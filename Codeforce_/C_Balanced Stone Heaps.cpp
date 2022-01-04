#include <bits/stdc++.h>
#define INF 1e10
using namespace std;

int main()
{
	int t; cin >> t;
	while (t--)
	{
		bool flag = true;
		int min_ = INF;
		int n; cin >> n;
		vector<int> arr(n+1, 0);
		for (int i = 1; i <= n; i++)
		{
			cin >> arr[i];
			if (i >= 3 && arr[i] >= 9) flag = false;
			min_ = min(min_, arr[i]);
		}
		if (flag)
		{
			cout << min_ << "\n";
			continue;
		}
		min_ = arr[1];

		for (int i = 1; i <= n - 2; i++)
		{
			int temp = arr[i + 2];
			for (int j = 0; 3 * j <= temp; j++)
			{
				int tmp2 = min(arr[i] + 2 * j, arr[i + 1] + 1 * j);
				tmp2 = min(tmp2, arr[i + 2] - 3 * j);
				if (tmp2 > min_)
				{
					j--;
					arr[i] += 2 * j;
					arr[i + 1] += j;
					arr[i + 2] -= 3 * j;
					break;
				}
			}
			min_ = min(arr[i], min_);
		}
		cout << min_ << "\n";
	}

	return 0;
}