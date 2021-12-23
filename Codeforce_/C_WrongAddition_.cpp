#include <bits/stdc++.h>
#define ll long long
using namespace std;

int t;
string a, s;

int to_int(char x, int k)
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

		ll len_a = (ll)a.length();
		ll len_s = (ll)b.length();

		ll idx_a = len_a - 1, idx_s = len_s - 1;
		bool flag = true;

		while (idx_a >= 0 && idx_s >= 0)
		{
			ll val_a = a[idx_a] - '0';
			ll val_s = s[idx_s] - '0';

			if (val_a <= val_s)
			{
				ll diff = val_s - val_a;
				b.push_back((char)('0' + diff));
				idx_a--, idx_s--;
			}
			else
			{
				idx_s--;
				val_s += (10 * ((ll)(s[idx_s] - '0')));
				ll diff = val_s - val_a;
				if (diff > 9 || diff < 0)
				{
					flag = false;
					break;
				}
				b.push_back((char)('0' + diff));
				idx_a--, idx_s--;
			}
		}

		if (!flag)
		{
			//cout << "1";
			cout << "-1\n";
			continue;
		}
		if (idx_a <= 0 )
		{
			flag = false;
		}
		if (!flag)
		{
			//cout << "2";
			cout << "-1\n";
			continue;
		}

		while (idx_s >= 0)
		{
			b.push_back(s[idx_s]--);
		}
		while (b.back() == '0') b.pop_back();
		reverse(b.begin(), b.end());
		cout << b << "\n";
	}
	return 0;
}