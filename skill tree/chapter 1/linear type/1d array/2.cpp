#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a = {0, 1, 1};
    for (int i = 3; i < n; i++)
        a.push_back(a[i - 3] + 2 * a[i - 2] + a[i - 1]);
    cout << a[n - 1] << endl;
    return 0;
}