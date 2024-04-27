#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        freq[num]++;
    }
    
    int count = 0;
    for (auto& pair : freq) {
        if (pair.second == 2) {
            count++;
        }
    }
    
    cout << count << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int tc;
    cin >> tc;
    while (tc--) {
        solve();
    }
    
    return 0;
}
