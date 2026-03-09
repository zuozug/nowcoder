#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    stack<int> st;
    vector<int> a;
    int ans = 0;
    for (int i = 0; i < n * 2; i++) {
        int num;
        cin >> num;
        if (!st.empty() && st.top() == num) {
            st.pop();
            ans += num * 2;
        }
        else
            st.push(num);
    }
    while (!st.empty()) {
        a.push_back(st.top());
        st.pop();
    }
    vector<int> dp(a.size() + 1, 0);
    map<int, int> p;
    int sum = 0;
    for (int i = 1; i <= a.size(); i++) {
        sum += a[i - 1];
        if (p.count(a[i - 1]))
            dp[i] = min(dp[i - 1] + a[i - 1], dp[p[a[i - 1]]]);
        else {
            dp[i] = dp[i - 1] + a[i - 1];
            p[a[i - 1]] = i - 1;
        }
    }
    cout << ans + sum - dp[a.size()] << endl;
    return 0;
}