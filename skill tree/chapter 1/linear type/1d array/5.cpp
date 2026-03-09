#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> used(5000, 0);
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        if (used[num - 1] == 0) {
            cout << num << " ";
            used[num - 1] = 1;
        }
    }
    cout << endl;
    return 0;
}