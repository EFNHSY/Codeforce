#include <bits/stdc++.h>
using namespace std;

struct p
{
	int x, y, z;
};
p visited[1001];
bool chk[1001];
void solve()
{
	int n; cin >> n;
	
	if (chk[n])
	{
		cout << visited[n].x << " " << visited[n].y << " " << visited[n].z << "\n";
	}
	else
	{
		cout << "-1\n";
	}
}
int main()
{
	for (int i = 0; i <= 400; i++)
	{
		for (int j = 0; j <= 200; j++)
		{
			for (int k = 0; k <= 200; k++)
			{
				int temp = 3 * i + 5 * j + 7 * k;
				if (temp > 1000) continue;
				chk[temp] = true;
				visited[temp] = { i,j,k };
			}
		}
	}
	int t; cin >> t;
	while (t--) solve();
}