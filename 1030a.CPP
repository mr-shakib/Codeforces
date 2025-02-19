#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for (int i=0; i<n; i++){
        cin >> nums[i];
    }
    int sum = 0;
    for (int j = 0; j<n; j++){
        sum += nums[j];
    }

    if (sum>0){
        cout  << "HARD";
    }else if (sum == 0){
        cout << "EASY";
    }
    
    return 0;
}