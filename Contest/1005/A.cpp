#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (s.find('1') == string::npos) {
            cout << 0 << endl;
            continue;
        }
        if (s.find('0') == string::npos) {
            cout << 1 << endl;
            continue;
        }

        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] != s[i + 1]) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
