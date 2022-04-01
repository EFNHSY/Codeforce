#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<int> v(n);
	vector<int> zero;
	//zero.push_back(-1);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] == 0)
		{
			zero.push_back(i);
		}
	}

	int idx = -1;
	pair<int, int> ans = { -1,-1 };
	int cursum = 0;
	zero.push_back(n);
	for (auto u : zero)
	{
		int neg = 0,two=0;
		for (int i = idx + 1; i < u; i++)
		{
			if (v[i] < 0) neg++;
			if (v[i] % 2 == 0) two++;
		}
		if (neg % 2 == 0)
		{
			if (cursum < two)
			{
				ans = { idx + 1,u - 1 };
				cursum = two;
			}
		}
		else
		{
			int l_idx=-1, r_idx=-1;
			for (int i = idx + 1; i < u; i++)
			{
				if (v[i] < 0) { l_idx = i; break; }
				
			}
			for (int i = u - 1; i >= idx + 1; i--)
			{
				if (v[i] < 0) { r_idx = i; break; }
			}
			//cout << l_idx << " " << r_idx << "\n";
			// 왼쪽을 자를경우 
			int two_right = 0, two_left = 0;
			for (int i = l_idx + 1; i < u; i++)
			{
				if (v[i] % 2 == 0) two_right++;
			}
			//cout << two_right << "\n";
			// 오른쪽을 자를경우
			for (int i = idx + 1; i < r_idx; i++)
			{
				if (v[i]%2 == 0) two_left++;
			}
			//cout << two_left << "\n";
			// 왼쪽을 자르는게 이득
			if (two_right > two_left)
			{
				if (cursum < two_right)
				{
					ans = { l_idx + 1,u - 1 };
					cursum = two_right;
				}
			}
			// 오른쪽을 자르는게 이득
			else
			{
				if (cursum < two_left)
				{
					ans = { idx + 1,r_idx - 1 };
					cursum = two_left;
				}
			}
		}
		idx = u;
	}
	if (ans.first == -1 && ans.second == -1)
	{
		cout << n << " " << 0 << "\n";
	}
	else
	{
		cout << ans.first - 0 << " " << n - ans.second-1 << "\n";
	}
	//cout << ans.first << " " << ans.second << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}