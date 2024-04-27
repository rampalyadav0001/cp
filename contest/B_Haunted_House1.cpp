#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        string s;
        cin >> n >> s;
        int count_0 = 0;
        
       vector<int>mp;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                mp.push_back(i);
                count_0++;
            }
        }
        if(count_0==0){
            for(int i=1;i<=n;i++){
                cout<<-1<<" ";
            }
        }
       else {
        
        int temp=n-1;
        int i = 1;
         int prev = 0;
        while (i <= count_0) {
            int cnt = 0;
           
            int a=mp.back();
            mp.pop_back();
            cnt=temp-a;
            cout << cnt + prev << " ";
            prev = cnt+prev;
            s[temp] = '0';
            s[temp - cnt] = '1';
            temp=temp-1;
            i++;
        }
        while (i <= n) {
            cout << -1 << " ";
            i++;
        }
        }
        cout << endl;
    }
    return 0;
}
