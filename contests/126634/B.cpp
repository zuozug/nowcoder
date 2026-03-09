#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, k;
    cin >> n >> k;
    map<int, int> cnt;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        cnt[num % k]++;
    }
    int flag = 1;
    for (auto i : cnt) {
        if (i.second % 2 == 1) {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}