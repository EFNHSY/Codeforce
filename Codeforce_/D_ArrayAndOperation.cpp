#include <bits/stdc++.h>
using namespace std;

int t, n, k;
bool cmp(int a, int b) { return a > b; }
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		vector<int> arr(n + 1);
		for (int i = 1; i <= n; i++) cin >> arr[i];
		sort(arr.begin() + 1, arr.end(), cmp);
		
		int ans = 0;
		for (int i = 1; i <= k; i++)
		{
			
			ans += (arr[i + k]/arr[i]);
		}
		
		for (int i = 2*k + 1; i <= n; i++)
		{
			ans += arr[i];
		}
		cout << ans << "\n";
	}

	return 0;
}