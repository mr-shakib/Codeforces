#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int res = (a + b + c) / 3;

    if (a <= res && b <= res)
    {
        if ((a + b + c) % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    else
        cout << "NO" << endl;
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