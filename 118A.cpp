#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word,result;
    cin >> word;
    for (char c : word) {
        if (!(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' ||
              c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')) {
            result += tolower(c); 
        }
    }

    for (int i = 0; i<result.size(); i++){
        cout << '.' << result[i];
    }
    return 0;
}