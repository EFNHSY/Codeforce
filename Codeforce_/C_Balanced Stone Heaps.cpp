#include <bits/stdc++.h>
using namespace std;
int t, n, h[200001];

bool check(int mid)
{
	vector<int> cur_h(h, h + n);
	for (int i = n - 1; i >= 2; i--)
	{
		if (cur_h[i] < mid) return false;
		int d = min(h[i], cur_h[i] - mid) / 3;
		// 기존의 heap에 들어있던 돌보다 많이 움직이면 안되므로 왜냐면 거꾸로 가니깐
		if (cur_h[i] - d < mid) return false;
		cur_h[i - 1] += d;
		cur_h[i - 2] += 2 * d;
		
	}
	
	return cur_h[0] >= mid && cur_h[1] >= mid;
}
void solve()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 0; i < n; i++) cin >> h[i];
		int lo = 0, hi = *max_element(h, h + n),ans=lo;
		while (lo <= hi)
		{
			int mid = (lo + hi) / 2;

			if (check(mid))
			{
				ans =max(ans, mid);
				lo = mid + 1;
			}
			else
			{
				hi = mid - 1;
			}
			
		}
		cout << ans << "\n";
	}
}
int main()
{
	solve();
	return 0;
}