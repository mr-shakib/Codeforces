#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;

    int length = word.size();
    int upper=0;
    int lower=0;

    for(int i = 0; i < length; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            upper++;
        }else{
            lower++;
        }
    }

    if(upper>lower){
        for (int j = 0; j < length; j++){
            word[j] = toupper(word[j]);
        }
        cout << word;
    }else{
        for (int j = 0; j < length; j++){
            word[j] = tolower(word[j]);
        }
        cout << word;
    }

    return 0;
}