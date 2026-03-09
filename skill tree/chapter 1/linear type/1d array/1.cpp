#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> a(10);
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 9; i >= 0; i--)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}