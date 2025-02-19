#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> n;
    vector<int> nums;
    int s = 0;
    int count = 0;

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        nums.push_back(a);
    }

    if(nums[0]%2==0){
        count++;
        s += nums[0]/2 + nums[1];
        cout << "sum = " << s << endl;
    }else{
        s += nums[0];
    }

    cout << s;
    

    

    return 0;
}