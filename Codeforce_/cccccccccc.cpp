#include <bits/stdc++.h>

using namespace std;

bool cmp_by_pos(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
	return a.second.first < b.second.first;
}
bool cmp_by_pos2(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
	return a.second.first > b.second.first;
}
bool cmp_by_w(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b)
{
	if (a.second.second == b.second.second) return a.second.first < b.second.first;
	return a.second.second < b.second.second;
}
void solve()
{
	int n, m; cin >> n >> m;
	vector<pair<int,pair<int,int>>> point(m);
	for (int i = 0; i < m; i++)
	{
		cin >> point[i].second.first >> point[i].second.second;
		point[i].first = i+1;
	}
	sort(point.begin(), point.end(), cmp_by_w);
	sort(point.begin(), point.begin() + 2 * n, cmp_by_pos);

	int w = 0;
	vector<pair<int, int>> ans;
	for (int i = 0; i < n; i++)
	{
		w += (point[i].second.second + point[2 * n - i - 1].second.second);
		ans.push_back({ point[i].first,point[2 * n - i - 1].first });
	}

	cout << w << "\n";
	for (auto u : ans)
	{
		cout << u.first << " " << u.second << "\n";
	}
	
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}