#include <bits/stdc++.h>
using namespace std;

bool chk[200001];
int idx[200001];
int ans[200001];

int main()
{
	int t; cin >> t;
	int n; string s;
	while (t--)
	{
		for (int i = 0; i < 200001; i++)
		{
			chk[i] =  idx[i] = ans[i] = 0;
		}
		vector<int> v;
		
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			idx[arr[i]] = i;
		}

		cin >> s;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '1')
			{
				chk[i] = true;
			}
		}
		
		for (int i = n; i >= 1; i--)
		{
			if (chk[idx[i]])
			{

			}
		}
	}
	return 0;
}