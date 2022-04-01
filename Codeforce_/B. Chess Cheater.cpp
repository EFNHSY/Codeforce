/*
#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	return ((a.second - a.first) < (b.second - b.first));
}
void solve()
{
	int n, k; cin >> n >> k;
	string s; cin >> s;
	int f_idx = -1;
	int lose = 0, win = 0;
	for (int i = n-1; i >=0; i--)
	{
		if (s[i] == 'W')
		{
			win++;
			f_idx = i;
		}
		else
		{
			lose++;
		}
	}

	if (lose <= k)
	{
		cout << 2 * n - 1 << "\n";
		return;
	}

	// W이 한번도 없을경우
	if (f_idx == -1)
	{
		if (k == 0) cout << "0\n";
		else cout << 2 * k - 1 << "\n";
		return;
	}
	vector<pair<int, int>> lose_streak;
	for (int i = f_idx; i < n; i++)
	{
		if (s[i] == 'L')
		{
			for (int j = i; j < n; j++)
			{
				if (s[j] == 'W')
				{
					lose_streak.push_back({ i,j });
					i = j;
					break;
				}
				else if (j == n - 1)
				{
					lose_streak.push_back({ i,n});
					i = j;
					break;
				}
			}
		}
	}

	sort(lose_streak.begin(), lose_streak.end(), cmp);

	
	for (auto u : lose_streak)
	{
		for (int i = u.first; i < u.second; i++)
		{
			if (k > 0)
			{
				win++;
				s[i] = 'W';
				k--;
			}
		}
		if (k == 0) break;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'W')
		{
			ans++;
			if (i - 1 >= 0 && s[i - 1] == 'W') ans++;
		}
	}

	if (win < n && k>0)
	{
		if (n - win < k)
		{
			ans += 2 * (k - n + win);
		}
		else
		{
			ans += 2 * k;
		}
		
	}
	cout << ans << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int n, k; 
	cin >> n >> k;
	string s; cin >> s;
	int winning_streaks_cnt = 0;
	int wins = 0;
	int losses = 0;
	vector<int> losing_streaks;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'W')
		{
			wins++;
			if (i == 0 || s[i - 1] == 'L') winning_streaks_cnt++;
		}
		if (s[i] == 'L')
		{
			losses++;
			if (i == 0 || s[i - 1] == 'W') losing_streaks.push_back(0);
			losing_streaks.back()++;
		}
	}

	if (k >= losses)
	{
		cout << 2 * n - 1 << "\n";
		return;
	}

	if (wins == 0)
	{
		if (k == 0) cout << 0 << "\n";
		else cout << 2 * k - 1 << "\n";
		return;
	}

	if (s[0] == 'L') losing_streaks[0] = 1e8;
	if (s[n - 1] == 'L') losing_streaks.back() = 1e8;
	sort(losing_streaks.begin(), losing_streaks.end());
	wins += k;

	for (int lose : losing_streaks)
	{
		if (lose > k) break;
		k -= lose;
		winning_streaks_cnt--;
	}
	cout << 2 * wins - winning_streaks_cnt << "\n";
}
int main()
{
	int t; cin >> t;
	while (t--) solve();
	return 0;
}