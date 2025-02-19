#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int> arr = {a,b,c,d};
    sort(arr.begin(), arr.end());
    
    int res= 0;
    

    for(int i = 0 ; i < 4 ; i++){
        if(arr[i] == arr[i-1]){
            res++;
            
        }
    }
    cout << res;
    
    return 0;
}