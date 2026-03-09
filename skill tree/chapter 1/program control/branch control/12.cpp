#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0 && b > 0 && c > 0) {
        if (a + b > c && a + c > b && b + c > a) {
            if (a == b && b == c)
                cout << "Equilateral triangle!" << endl;
            else if (a == b || b == c || a == c)
                cout << "Isosceles triangle!" << endl;
            else
                cout << "Ordinary triangle!" << endl;
        }
        else
            cout << "Not a triangle!" << endl;
    }
    else
        cout << "Not a triangle!" << endl;
    return 0;
}