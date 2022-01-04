#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ll t,n,k; cin >> t;
	while (t--)
	{
		ll sum = 0;
		cin >> n >> k;
		vector<ll> arr(n,0);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
		}
		
		queue<pair<int, int>> q; // {cur_sum,cnt}
		q.push({ sum,0 });

		while (!q.empty())
		{
			auto cur = q.front();
			q.pop();

			if (cur.first <= k)
			{
				cout << cur.second << "\n";
				break;
			}


		}

	}
	return 0;
}