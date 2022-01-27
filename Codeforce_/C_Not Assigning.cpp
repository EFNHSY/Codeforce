#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n; cin >> n;
	vector<pair<int, int>> v;
	vector<bool> visited(n + 1,false);
	vector<int> cnt(n + 1,0);
	vector<int> edge(n,0);

	bool flag = false;
	for (int i = 0; i < n-1; i++)
	{
		int a, b; cin >> a >> b;
		v.push_back({ a,b });
		cnt[a]++;
		cnt[b]++;
		if (cnt[a] > 2 || cnt[b] > 2) flag = true;
	}
	if (flag)
	{
		cout << "-1\n";
		return;
	}

	for (int i = 0; i < n-1; i++)
	{
		if (cnt[v[i].first] == 2 && cnt[v[i].second] == 2)
		{
			if (!visited[v[i].first] && !visited[v[i].second])
			{

				visited[v[i].first] = true;
				visited[v[i].second] = true;
				edge[i] = 2;

			}
		}
		
	}
	
	for (int i = 0; i < n - 1; i++)
	{
		if (edge[i] != 2) cout << 3 << " ";
		else cout << 2 << " ";
	}cout << "\n";

}
int main()
{
	int t; cin >> t;
	while(t--) solve();
	return 0;
}