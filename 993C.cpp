#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int r1 = min(a, m);
    int r2 = min(b, m);

    int emptyR1 = m - r1;
    int emptyR2 = m - r2;

    int available = emptyR1 + emptyR2;
    int seatC = min(c, available);

    int total = r1 + r2 + seatC;
    cout << total << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}