#include <bits/stdc++.h>
using namespace std;

bool chk[1001];
struct compare 
{
	bool operator()(pair<int, int>a, pair<int, int>b) {
		return (a.second-a.first) > (b.second-b.first);
	}
};
int main()
{
	int t; cin >> t;
	while (t--)
	{
		memset(chk, false, sizeof(chk));
		int n; cin >> n;
		priority_queue<pair<int, int>, vector<pair<int, int>>, compare> pq;

		for (int i = 0; i < n; i++)
		{
			int a, b; cin >> a >> b;
			pq.push({ a,b });
		}

		while (!pq.empty())
		{
			int a = pq.top().first;
			int b = pq.top().second;
			pq.pop();
			
			
			for (int i = a; i <= b; i++)
			{
				if (!chk[i])
				{
					chk[i] = true;
					cout << a << " " << b << " " << i << "\n";
				}
			}
		}
	}
	return 0;
}