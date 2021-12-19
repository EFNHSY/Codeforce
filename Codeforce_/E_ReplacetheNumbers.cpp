#include <bits/stdc++.h>
using namespace std;

vector<int> idx[500001];

int main()
{
	int q; cin >> q;
	vector<int> arr;
	while (q--)
	{
		int n; cin >> n;
		if (n == 1)
		{
			int x; cin >> x; 
			arr.push_back(x);
			
		}
		else
		{
			int x, y; cin >> x >> y;
			for (int i = 0, j = arr.size() - 1; i <= j; i++, j--)
			{
				if (arr[i] == x) arr[i] = y;
				if (arr[j] == x) arr[j] = y;
			}
		}

	}
	for (auto u : arr)
	{
		cout << u << " ";
	}cout << "\n";
}