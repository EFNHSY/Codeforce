#include <bits/stdc++.h>
#define MAXN 500000+13
using namespace std;

vector<int> pos[MAXN];
vector<int> ans(MAXN, 0);

int main()
{
	int query; cin >> query;
	int idx = 0;
	while (query--)
	{
		int q, x, y;
		cin >> q >> x;
		if (q == 1)
		{
			pos[x].push_back(idx++);
		}
		else
		{
			cin >> y;
			if (x != y)
			{
				if (pos[x].size() > pos[y].size()) pos[x].swap(pos[y]);
				for (int i = 0; i < pos[x].size(); i++) pos[y].push_back(pos[x][i]);
				pos[x].clear();
			}
		}
	}
	
	for (int i = 0; i < MAXN; i++)
	{
		for (auto x : pos[i])
		{
			ans[x] = i;
		}
	}
	for (int i = 0; i < MAXN; i++)
	{
		if (ans[i] < 1) break;
		cout << ans[i] << " ";
	}
	return 0;
}