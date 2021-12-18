#include <bits/stdc++.h>
using namespace std;

int t;
string S, T;
bool chk[3];
int first_occurence[3],last_occurence[3];
int main()
{
	cin >> t;
	while (t--)
	{
		for (int i = 0; i < 3; i++)
		{
			chk[i] = false;
			first_occurence[i] = last_occurence[i] = 0;
		}
		cin >> S >> T;
		sort(S.begin(), S.end());
		
		for(int i=0;i<S.size();i++)
		{ 
			if (S[i] == 'a')
			{
				chk[0] = true;
				last_occurence[0] = i;
			}
			else if (S[i] == 'b') {
				chk[1] = true;
				last_occurence[1] = i;
			}
			else if (S[i] == 'c')
			{
				chk[2] = true;
				last_occurence[2] = i;
			}
		}

		for (int i = S.size()-1; i >=0; i--)
		{
			if (S[i] == 'a')
			{
				
				first_occurence[0] = i;
			}
			else if (S[i] == 'b') {
				
				first_occurence[1] = i;
			}
			else if (S[i] == 'c')
			{
				
				first_occurence[2] = i;
			}
		}
	

		bool flag = false;
		for (int i = 0; i < 3; i++) if (!chk[i]) flag = true;
		//cout << "ans: ";
		if (flag)
		{
			cout << S << "\n";
		}
		else
		{
			// abc 모두 존재하니깐 
			// T에 나온 abc 순서대로 -- (a)(b)(c)나머지
			// abc -> (a)(c)(b)
			// acb -> (a)(b)(c)
			// bac -> (a)(b)(c)
			// bca -> (a)(b)(c)
			// cab -> (a)(b)(c)
			// cba -> (a)(b)(c)
			if (T == "abc")
			{
				
				// (a)(c)(b)로 만들어줘야함
				string ans = "";
				ans += S.substr(first_occurence[0], last_occurence[0] - first_occurence[0] + 1);
				ans += S.substr(first_occurence[2], last_occurence[2] - first_occurence[2] + 1);
				ans += S.substr(first_occurence[1], last_occurence[1] - first_occurence[1] + 1);
				ans += S.substr(last_occurence[2] + 1);
				cout << ans << "\n";
			}
			else
			{
				cout << S << "\n";
			}


		}

	}
	return 0;
}