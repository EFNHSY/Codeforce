#include <bits/stdc++.h>
using namespace std;
int t,n;

int main()
{
	cin >> t;
	while (t--)
	{
		cin >> n;

		vector<string> bigram;
		for (int i = 0; i < n - 2; i++)
		{
			string temp; cin >> temp;
			bigram.push_back(temp);
		}

		string ans;
		bool flag = false;
		
		for (int i = 0; i < n - 3; i++)
		{
			if (bigram[i][1] == bigram[i + 1][0])
			{
				ans += bigram[i][0];
			}
			else
			{
				ans += bigram[i];
			}
		}
		ans += bigram[n - 3];

		if (ans.size() == n) cout << ans << "\n";
		else cout << ans + "a\n";
	}

	return 0;
}