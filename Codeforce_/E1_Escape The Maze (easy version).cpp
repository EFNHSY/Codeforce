#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200001];
int dist[200001];

void solve()
{
	
	int n, k; cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		adj[i].clear();
		dist[i] = -1;
	}
	vector<int> fri(n + 1, -1);
	vector<int> from(n + 1, -1);
	queue<int> q;
	for (int i = 1; i <=k ; i++)
	{
		int x; cin >> x;
		fri[x] = 0;
		q.push(x);
	}
	for (int i = 1; i <= n-1; i++)
	{
		int a, b; cin >> a >> b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (auto u : adj[x])
		{
			if (fri[u] != -1) continue;
			fri[u] = fri[x] + 1;
			q.push(u);
		}
	}

	dist[1] = 0;
	q.push(1);

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		for (auto u : adj[x])
		{
			if (dist[u] != -1) continue;
			if (dist[x] + 1 >= fri[u]) continue;
			dist[u] = dist[x] + 1;
			q.push(u);
		}
	}

	for (int i = 2; i <= n; i++)
	{
		if (dist[i] != -1 && adj[i].size() == 1)
		{
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}