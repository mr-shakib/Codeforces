#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <string> magnet(n);
    for (int i = 0 ; i < n ; i++){
        cin >> magnet[i];
    }
    
    int groups = 1;

    for(int i = 1 ; i < n; i++){
        if(magnet[i] != magnet[i-1]){
            groups++;
        }
    }

    cout << groups;
    return 0;
}