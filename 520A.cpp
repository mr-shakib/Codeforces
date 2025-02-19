#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string word;
    cin >> word;
    transform(word.begin(), word.end(), word.begin(), ::tolower);
    set<char> wordset;
    for(int i = 0 ; i < n; i++){
        wordset.insert(word[i]);
    }

    if(wordset.size() >=26 ){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    
    return 0;
}