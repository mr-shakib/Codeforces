#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigit(int year){
    string s = to_string(year);
    set<char> digits(s.begin(),s.end());
    return digits.size() == s.size();
}

int nextDistinctYear(int year){
    while(true){
        year++;
        if(hasDistinctDigit(year)){
            return year;
        }
    }
}

int main()
{   
    int year;
    cin >> year;
    
    cout << nextDistinctYear(year) << endl;
    return 0;
}