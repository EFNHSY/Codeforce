#include <bits/stdc++.h>
using namespace std; 

#define ll long long
vector<pair<ll, ll>> arr;
vector<ll> segTree;
const ll inf = 1e9;



void solve()
{
	int n; cin >> n;
	arr.push_back({ -inf,0 });
	segTree = vector<ll>(4 * (n + 10));
	for (int i = 1; i <= n; i++)
	{
		int x; cin >> x;
		arr.push_back({ x,i });
	}
	
	sort(arr.begin(), arr.end());

	for (int i = 1; i <= n; i++)
	{

	}
}
int main()
{
	int t; cin >> t;
	while(t--) solve();
	return 0;
}