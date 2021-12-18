#include <bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> arr(n);
		for (int& x : arr) cin >> x;

		int mn = *min_element(arr.begin(), arr.end());

		for (int i = 0,k=0;k<n/2; i++)
		{
			if (arr[i] != mn)
			{
				cout << arr[i] << " " << mn;
				k++;
			}
		}
	}

	return 0;
}