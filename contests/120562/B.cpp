#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        map<int, int> cnt;
        for (auto i : a)
            cnt[i]++;
        if (cnt.rbegin()->second % 2 == 0) {
            for (int i = 0; i < n; i++) {
                if (a[i] != cnt.rbegin()->first)
                    cout << 1;
                else
                    cout << 0;
            }
            cout << endl;
        }
        else {
            for (int i = 0; i < n; i++) {
                if (a[i] == cnt.rbegin()->first)
                    cout << 1;
                else
                    cout << 0;
            }
            cout << endl;
        }
    }
    return  0;
}