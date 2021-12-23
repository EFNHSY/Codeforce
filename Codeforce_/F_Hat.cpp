#include <bits/stdc++.h>
using namespace std;

int t, n, m, k;

struct compare
{
	bool operator()(pair<int, int> a, pair<int, int> b)
	{
		if (a.second == b.second) return a.first > b.first;
		return a.second > b.second;
	}
};
int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n >> m >> k;
		

	}
	return 0;
}