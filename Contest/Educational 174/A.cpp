#include <iostream>
#include <vector>
#include <array>
using namespace std;

bool can_array_exist(const vector<int>& b) {
    int n = b.size() + 2;  // b contains n-2 elements
    if (n < 3) return false;
    
    // For each value of first element (1 or 2)
    for (int first = 1; first <= 2; first++) {
        // For each value of second element (can be same or different from first)
        for (int second = 1; second <= 3; second++) {
            // For each value of last element (try different possibilities)
            for (int last = 1; last <= 3; last++) {
                vector<int> a;
                a.push_back(first);
                a.push_back(second);
                bool valid = true;
                
                // Build the middle elements
                for (int i = 2; i < n-1; i++) {
                    if (b[i-2] == 1) {
                        // Must be equal to both neighbors
                        if (a[i-1] != a[i-2]) {
                            valid = false;
                            break;
                        }
                        a.push_back(a[i-1]);
                    } else {
                        // Must be different from at least one neighbor
                        if (a[i-1] == a[i-2]) {
                            a.push_back(a[i-1] + 1);
                        } else {
                            a.push_back(a[i-1]);
                        }
                    }
                    
                    // Check if current triple satisfies b[i-2]
                    bool is_equal = (a[i] == a[i-1] && a[i-1] == a[i-2]);
                    if (is_equal != bool(b[i-2])) {
                        valid = false;
                        break;
                    }
                }
                
                if (!valid) continue;
                
                // Try the last element
                a.push_back(last);
                
                // Check if last element creates valid condition
                if (n >= 3) {
                    bool last_is_equal = (a[n-2] == a[n-3] && a[n-2] == a[n-1]);
                    if (last_is_equal != bool(b[n-3])) {
                        continue;
                    }
                }
                
                // All conditions satisfied
                return true;
            }
        }
    }
    
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;  
    
    while (t--) {
        int n;
        cin >> n;  
        
        vector<int> b(n-2);
        for (int i = 0; i < n-2; i++) {
            cin >> b[i];  
        }
        
        cout << (can_array_exist(b) ? "YES\n" : "NO\n");
    }
    
    return 0;
}