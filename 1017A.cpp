#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string sentence;
    getline(cin, sentence);

    bool isStart = true;

    for (char c : sentence)
    {
        if (isStart && isalpha(c))
        {
            cout << c << "";
            isStart = false;
        }
        if (c == ' ')
        {
            isStart = true;
        }
    }

    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }

    return 0;
}