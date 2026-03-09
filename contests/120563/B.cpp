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
        if (n > 10) {
            for (int i = 0; i < n; i++) {
                if (a[i] % 2 == 0) {
                    cout << a[i] << " ";
                    break;
                }
            }
            for (int i = n - 1; i >= 0; i--) {
                if (a[i] % 2 == 0) {
                    cout << a[i] << endl;
                    break;
                }
            }
        }
        else {
            int flag = 0;
            for (int i = 0; i < n - 1; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (__gcd(a[i], a[j]) > 1) {
                        flag = 1;
                        cout << a[i] << " " << a[j] << endl;
                        break;
                    }
                }
                if (flag)
                    break;
            }
            if (flag == 0)
                cout << -1 << endl;
        }
    }
    return 0;
}