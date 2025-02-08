#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w;
    cin >> k >> n >> w;

    int a = 0;
    int total = 0;

    for (int i = 1 ; i <= w; i++){
        a = i * k;
        total = total + a;
    }

    int res = total - n;

    if (res >= 0){
        cout << res;
    }else{
        cout << '0';
    }

    

    
    return 0;
}