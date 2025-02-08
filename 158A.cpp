#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;

    int scores[n];
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    int pass = scores[k-1];

    for (int j = 0; j < n; j++)
    {
        if (scores[j] >= pass && scores[j] > 0)
        {
            count++;
        }
        
        
        
    }

    cout << count;

    
    return 0;
}