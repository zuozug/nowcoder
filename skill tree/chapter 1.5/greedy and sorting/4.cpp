#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ji, ou;
        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            if (num % 2 == 0)
                ou.push_back(num);
            else
                ji.push_back(num);
        }
        sort(ou.begin(), ou.end());
        sort(ji.begin(), ji.end());
        for (auto i : ou)
            cout << i << " ";
        for (auto i : ji)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}