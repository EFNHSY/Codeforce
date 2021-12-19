#include <bits/stdc++.h>
#define ll long long
using namespace std;

string oper(string t)
{
	while (t.back() == 0) t.pop_back();
	reverse(t.begin(), t.end());
	return t;
}
string to_bin(ll x)
{
	string temp = "";
	while (x)
	{
		temp += char('0' + (x & 1));
		x >> 1;
	}
	reverse(temp.begin(), temp.end());
	return temp;
}
int main()
{
	ll x, y; cin >> x >> y;
	set<string> used;
	queue<string> q;
	q.push(to_bin(x));
	
	while (!q.empty())
	{
		string x = q.front();
		q.pop();

		if (x.size() > 100) continue;
		for (int i = 0; i < 2; i++)
		{
			string nx = oper(x + string(1, char('0' + i)));
			if (!used.count(nx))
			{
				used.insert(nx);
				q.push(nx);
			}
		}
	}

	if (x==y||used.count(to_bin(y)))
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}

	return 0;
}