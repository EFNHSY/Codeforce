#include <bits/stdc++.h>
using namespace std;

int t, n;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;
		set<int> st;
		for (int i = 1; i <= n; i++) st.insert(i);

		vector<int> arr;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			if (st.find(x) != st.end()) st.erase(x);
			else
			{
				arr.push_back(x);
			}
		}

		sort(arr.begin(), arr.end());
		reverse(arr.begin(), arr.end());

		bool flag = false;
		for (auto u : arr)
		{
			auto it = st.end();
			it--;
			int trg = (*it);
			if(trg>(u-1)/2)
			{
				flag = true;
				break;
			}
			st.erase(it);
		}
		if (flag) cout << "-1\n";
		else cout << arr.size() << "\n";
	}
	return 0;
}