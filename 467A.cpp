#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    
    int empty = 0;

    for(int i = 0 ; i < n; i ++){
        int rooms[2];
        cin >> rooms[0] >> rooms[1];

        if(rooms[1]-rooms[0] >=2){
            empty++;
        }
    }

    cout << empty;
    return 0;
}