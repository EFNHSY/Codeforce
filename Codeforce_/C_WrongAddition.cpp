#include <bits/stdc++.h>
using namespace std;

long long t;
string a, s;

long long to_int(char x,long long k)
{	
	return (x - '0') * pow(10, k);
}
int main()
{
	cin >> t;
	while (t--)
	{
		string b = "";
		cin >> a >> s;
		bool flag = false;
		
		
		reverse(a.begin(), a.end());
		reverse(s.begin(), s.end());
		long long i = 0, j = 0;
		
		while (i < a.size() && j < s.size())
		{
			if (a[i] > s[j])
			{
				long long temp = to_int(s[j + 1], 1) + to_int(s[j], 0) - to_int(a[i], 0);
				//cout << temp << "\n";
				if (temp > 9 || temp < 0) { flag = true; break; }
				b += to_string(temp);
				i++; j += 2;
			}
			else
			{
				b += to_string(to_int(s[j], 0) - to_int(a[i], 0));
				i++; j++;
			}
		}
		
		if (i < a.size()) { flag = true; }
		
		
		if (flag)cout << "-1\n";
		else
		{
			if (j < s.size())
			{
				for (; j < s.size(); j++) b += s[j];
			}
			while (b.back() == '0') b.pop_back();
			reverse(b.begin(), b.end());
			cout << b << "\n";
		}
		
	}

	return 0;
}