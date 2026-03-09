#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    if (ya == yb) {
        if (ya == 0)
            cout << "no answer" << endl;
        else {
            if (abs(xa - xb) * abs(ya) == 4)
                cout << "0" << endl;
            else
                cout << "no answer" << endl;
        }
    }
    else {
        if (xa == xb) {
            double h = 4;
            h /= (double)abs(ya - yb);
            cout << h + xa << endl;
        }
        else {
            double k = yb - ya;
            k /= (double)(xb - xa);
            double b = (double)ya - k * xa;
            double l = b / k * (-1), r = 1e18;
            while (r - l >= 1e-12) {
                double m = (l + r) / 2;
                double s = abs((double)yb * ((double)xa - m) - (double)ya * ((double)xb - m)) / 2;
                if (s >= (double)2)
                    r = m;
                else
                    l = m;
            }
            cout << fixed << setprecision(12) << l << endl;
        }
    }
    return 0;
}