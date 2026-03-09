#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s;
    int a = 0, b = 0;
    cin >> s;
    for (auto i : s) {
        if (i == 'A')
            a++;
        else if (i == 'B')
            b++;
    }
    if (a > b)
        cout << "A" << endl;
    else if (a == b)
        cout << "E" << endl;
    else
        cout << "B" << endl;
    return 0;
}