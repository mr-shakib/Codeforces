#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;

    string word;
    cin >> word;

    int countA = 0;
    int countD = 0;

    for(int i = 0; i<num; i++){
        if(word[i] == 'A'){
            countA++;
        }else if(word[i] == 'D'){
            countD++;
        }
    }

    if(countA > countD){
        cout << "Anton";
    }else if(countD > countA){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
    return 0;
}