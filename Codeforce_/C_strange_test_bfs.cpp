#include <bits/stdc++.h>
#define INF 1000000
using namespace std;

int visited[INF + 1];

bool isRange(int nx)
{
	if (nx >= 1 && nx <= INF) return true;
	return false;
}
void solve()
{
	memset(visited, 0, sizeof(visited));
	int a, b; cin >> a >> b;
	queue<int> q;
	q.push(a);

	while (!q.empty())
	{
		int x = q.front();
		q.pop();

		if (x == b) break;

		int new_x = x + 1;
		if (isRange(new_x) && !visited[new_x])
		{
			visited[new_x] = visited[x] + 1;
			q.push(new_x);
		}

		new_x = x - 1;
		if (isRange(new_x) && !visited[new_x])
		{
			visited[new_x] = visited[x] + 1;
			q.push(new_x);
		}

		new_x = x | b;
		if (isRange(new_x) && !visited[new_x])
		{
			visited[new_x] = visited[x] + 1;
			q.push(new_x);
		}
	}

	cout << visited[b] << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}