#include <bits/stdc++.h>
using namespace std;
int t;
int alpha[26];
int main()
{
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 26; i++) alpha[i] = 0;
		string s;
		cin >> s;
		if (s.size() % 2 != 0) { cout << "NO\n"; continue; }
		
		int half = s.size() / 2;
		bool flag = false;
		for (int i = 0; i < half; i++)
		{
			if (s[i] != s[i + half])
			{
				cout << "NO\n";
				flag = true;
				break;
			}
		}
		if (!flag) cout << "YES\n";
	}
	return 0;
}