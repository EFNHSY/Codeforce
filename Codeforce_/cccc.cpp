#include <bits/stdc++.h>
using namespace std;

void solve()
{
	bool flag = false;
	int n; cin >> n;
	vector<pair<int,int>> arr(n);
	vector<int> kkk;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i].first; arr[i].second = i;
		if (arr[i].first == 1) flag = true;
		kkk.push_back(arr[i].first);
	}
	if (!flag)
	{
		cout << "NO\n";
		return;
	}


	sort(arr.begin(), arr.end());
	vector<int> v(n);
	vector<int> ans(n);
	for (int i = 1; i <= n; i++) v.push_back(i);

	for (auto u : arr)
	{
		int idx = -u.second + n;
		idx %= n;
		ans[idx] = v.back();
		v.pop_back();
	}
	
	for (int i = 0; i < n; i++)
	{
		ans.push_back(ans[i]);
	}
	
	for (int i = n; i >= 1; i--)
	{
		int temp = ans[i]; int cnt = 1;
		
		for (int j = i; j < i + n; j++)
		{
			if (temp < ans[j])
			{
				cnt++;
				temp = ans[j];
			}
		}
		
		if (cnt != kkk[n-i])
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}