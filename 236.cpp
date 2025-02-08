#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    
    unordered_set<char> wordC;

    for(char ch:word){
        wordC.insert(ch);
    }
    
    if(wordC.size()%2==0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
    return 0;
}