#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin >> t;
    
    while(t--){
        cin >> a >> b;
        int res = (b-(a % b)) % b;
        cout << res << endl;
    }
    return 0;
}