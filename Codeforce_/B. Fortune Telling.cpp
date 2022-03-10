#include <bits/stdc++.h>
#define INF 987654321
#define ll long long
using namespace std;
ll n, x, y;
vector<ll> arr;

bool go(ll num,ll cnt)
{
	
	if (cnt == n)
	{
		
		if (num == y)
		{
			//cout << num << "\n";
			return true;
		}
		
	}
	else if (cnt < n)
	{
		go(num + arr[cnt], cnt + 1);
		go(num ^ arr[cnt], cnt + 1);
	}
	
	
}
void solve()
{
	 cin >> n >> x >> y;
	 arr = vector<ll>(n);
	 for (ll& x : arr) cin >> x;

	 bool alice = go(x, 0);
	 bool bob = go(x + 3, 0);
	 //cout << alice << " " << bob << "\n";
	 cout << (alice  ? "alice\n" : "bob\n");
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}