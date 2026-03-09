#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int pa = 0, pb = 0;
    while (pa < n && pb < m) {
        if (a[pa] < b[pb]) {
            cout << a[pa] << " ";
            pa++;
        }
        else {
            cout << b[pb] << " ";
            pb++;
        }
    }
    for (int i = pa; i < n; i++)
        cout << a[i] << " ";
    for (int i = pb; i < m; i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}