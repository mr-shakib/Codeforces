#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    vector<int> xlevels;
    vector<int> ylevels;
    cin >> n;
    cin >> x;
    for(int i = 0; i < x; i ++){
        int a;
        cin >> a;
        xlevels.push_back(a);
    }
    cin >> y;
    for(int i = 0; i < y; i ++){
        int a;
        cin >> a;
        ylevels.push_back(a);
    }

    set<int> totalLevel;
    totalLevel.insert(xlevels.begin(), xlevels.end());
    totalLevel.insert(ylevels.begin(), ylevels.end());

    if(totalLevel.size() >= n){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }




    return 0;
}