#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    double res = 0;

    for(int i =0; i < n; i++){
        cin >> nums[i];
    }

    for(int i =0; i < n; i++){
        res += nums[i];
    }
    
    cout << res/n;
    
    return 0;
}

