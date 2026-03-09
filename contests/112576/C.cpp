#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        n *= 2;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int flag = 0;
            for (int j = i + 1; j < n; j++) {
                if (a[j] == a[i]) {
                    sum += j - i + 1;
                    i = j;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                break;
        }
        if (sum == n)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}