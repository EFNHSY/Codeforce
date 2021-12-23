#include <bits/stdc++.h>
#define ll long long
#define MAX 1000001234
using namespace std;
int t, n;


int main()
{
	
	cin >> t;
	while (t--)
	{
		set<ll> s;
		cin >> n;
		for (ll i = 1; i <=sqrt(n); i++)
		{
			if(i*i<=n) s.insert(i * i);
			if(i * i * i<=n) s.insert(i * i * i);
		}
		cout << s.size() << "\n";
		
	}

	return 0;
}