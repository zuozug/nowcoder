#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b = a;
    sort(b.begin(), b.end());
    auto bb = b;
    reverse(bb.begin(), bb.end());
    if (b == a || bb == a)
        cout << "sorted" << endl;
    else
        cout << "unsorted" << endl;
    return 0;
}