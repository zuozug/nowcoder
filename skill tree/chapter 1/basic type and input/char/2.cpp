#include<bits/stdc++.h>
using namespace std;
#define int long long
void func(int a, int b, char c) {
    for (int i = 0; i < a; i++)
        cout << " ";
    for (int i = 0; i < b; i++)
        cout << c;
    cout << endl;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    char c;
    cin >> c;
    func(2, 1, c);
    func(1, 3, c);
    func(0, 5, c);
    func(1, 3, c);
    func(2, 1, c);
    return 0;
}