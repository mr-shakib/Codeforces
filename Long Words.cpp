#include<iostream>
using namespace std;

int main(){
    string word;
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        cin >> word;
        int len = word.length();
        if(len > 10){
            cout << word[0] << len-2 << word[len-1] << '\n';
        }else{
            cout << word << '\n';
        }
    }
}