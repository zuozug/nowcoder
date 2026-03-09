#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    vector<int> a;
    while (cin >> n) {
        if (n == 0)
            break;
        a.push_back(n);
    }
    for (int i = a.size() - 1; i >= 0; i--)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}