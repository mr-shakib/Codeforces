#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string str;
    
    
    

    for(int i = 0 ; i < t; i++){
        int res = 0;
        cin >> str;
        int n = str.length();
        for (int j = 0; j < n ; j++){
            if(str[j] == '1'){
                res++;
                
            }
            
        }
        cout << res << endl;
    }
    
    return 0;
}