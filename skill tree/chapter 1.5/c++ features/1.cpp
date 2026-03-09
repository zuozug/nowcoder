#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int i;
    double a, b, c;
    scanf("%lld;%llf,%llf,%llf", &i, &a, &b, &c);
    cout << "The each subject score of No. " << i << " is ";
    cout << fixed << setprecision(2) << a << ", ";
    cout << fixed << setprecision(2) << b << ", ";
    cout << fixed << setprecision(2) << c << "." << endl;
    return 0;
}