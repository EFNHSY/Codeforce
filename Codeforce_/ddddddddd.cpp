#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
typedef long long ll;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tp;

int main(void) {
    cin.tie(0)->sync_with_stdio(0);

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        deque<int> dq;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            dq.push_back(a);
        }
        vector<int> ans;
        for (int i = n; i >= 1; i--) {
            int cnt = 0;
            while (dq.back() != i) {
                int b = dq.front(); dq.pop_front(); dq.push_back(b); cnt++;
            }
            dq.pop_back();
            ans.push_back(cnt);
        }
        reverse(all(ans));
        for (int i : ans) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}