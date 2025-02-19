#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n; 
    cin >> n;
    long long res = n/2 - (n%2)*n;

   
    cout << res;
    return 0;
}