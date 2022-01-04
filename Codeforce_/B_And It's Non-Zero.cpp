#include <bits/stdc++.h>
using namespace std;
int dp[200012][22];
int arr[200012];
int main()
{
	for (int i = 1; i <= 200000; i++) arr[i] = i;

	int cnt = 0;
	for (int j = 0; j < 22; j++)
	{
		int cnt = 0;
		for (int i = 1; i <= 200000; i++)
		{
			if ((arr[i] & 1) == 0) cnt++;
			arr[i] = arr[i] >> 1;
			dp[i][j] = cnt;
		}
	}
	
	int t;
	cin >> t;
	while (t--)
	{
		int l, r;
		cin >> l >> r;
		
		int k = log2(r);
		int ans = r - l + 1;
		for (int i = 0; i <= k; i++)
		{
			ans = min(dp[r][i] - dp[l-1][i], ans);
		}
		cout << ans << "\n";
	}

	return 0;
}