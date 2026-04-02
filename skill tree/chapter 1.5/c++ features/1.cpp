#include<bits/stdc++.h>
using namespace std;
#define int long long
void fun(int a) {
    cout << a / 1000 << ".";
    if (a % 1000 == 0)
        cout << "00";
    else
        cout << a % 1000 / 10;
}
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int i;
    double a, b, c;
    scanf("%lld;%lf,%lf,%lf", &i, &a, &b, &c);
    a *= 1000; b *= 1000; c *= 1000;
    int aa = a, bb = b, cc = c;
    if (aa % 10 >= 5)
        aa += 10;
    if (bb % 10 >= 5)
        bb += 10;
    if (cc % 10 >= 5)
        cc += 10;
    cout << "The each subject score of No. " << i << " is ";
    fun(aa); cout << ", ";
    fun(bb); cout << ", ";
    fun(cc); cout << "." << endl;
    return 0;
}