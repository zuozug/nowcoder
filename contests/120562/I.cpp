#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
            cin >> s[i];
        int cnt0 = 0, cnt1 = 0;
        for (auto i : s) {
            for (auto j : i) {
                if (j == '0')
                    cnt0++;
                else
                    cnt1++;
            }
        }
        if (cnt0 == 1) {
            if (cnt1 == 1) {
                for (auto i : s) {
                    for (auto j : i)
                        cout << 'N';
                    cout << endl;
                }
            }
            else {
                for (auto i : s) {
                    for (auto j : i) {
                        if (j == '0')
                            cout << 'N';
                        else
                            cout << 'Y';
                    }
                    cout << endl;
                }
            }
        }
        else {
            if (cnt1 == 1) {
                for (auto i : s) {
                    for (auto j : i) {
                        if (j == '1')
                            cout << 'N';
                        else
                            cout << 'Y';
                    }
                    cout << endl;
                }
            }
            else {
                for (auto i : s) {
                    for (auto j : i)
                        cout << 'Y';
                    cout << endl;
                }
            }
        }

    }
    return 0;
}