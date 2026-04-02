#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n + 1);
    for (int i = 0; i <= n; i++)
        cin >> a[i];
    int flag = 0;
    for (int i = 0; i <= n; i++) {
        if (a[i] == 0)
            continue;
        if (flag == 0) {
            flag = 1;
            if (a[i] < 0)
                cout << '-';
            if (abs(a[i]) != 1)
                cout << abs(a[i]);
            else if (i == n)
                cout << 1;
            if (i != n) {
                cout << "x";
                if (i != n - 1)
                    cout << "^" << n - i;
            }
        }
        else {
            if (a[i] > 0)
                cout << '+';
            else
                cout << '-';
            if (abs(a[i]) != 1)
                cout << abs(a[i]);
            else if (i == n)
                cout << 1;
            if (i != n) {
                cout << "x";
                if (i != n - 1)
                    cout << "^" << n - i;
            }
        }
    }
    if (flag == 0)
        cout << 0;
    cout << endl;
    return 0;
}