#include<iostream>
using namespace std;
int main()
{
    int melon;
    cin >> melon;
    if(melon > 2 && melon % 2== 0){
        cout << "YES";
    }else{
        cout << "NO";
    }
}