#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(2 * n);
    vector<int> ans1, ans2;
    set<int> s;
    for (int i = 0; i < 2 * n; i++)
        cin >> a[i];
    for (int i = 0; i < n * 2; i++) {
        if (s.count(a[i]))
            ans2.push_back(a[i]);
        else {
            ans1.push_back(a[i]);
            s.insert(a[i]);
        }
    }
    for (auto i : ans1)
        cout << i << " ";
    cout << endl;
    for (auto i : ans2)
        cout << i << " ";
    cout << endl;
    return 0;
}