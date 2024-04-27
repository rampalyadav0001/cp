#include <bits/stdc++.h>
using namespace std;


// this is recursive code;
int solve(string n) {
    if (stoi(n) == 0) {
        return 0;
    }
    int res = INT_MAX;
    for(auto c:n){
        int digit=c-'0';
        if(digit!=0){
            string final=to_string(stoi(n)-digit);
            res=min(res,1+solve(final));
        }
    }
   
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc = 1;
    // cin >> tc;
    while (tc--) {
        // string input;
        // cin >> input;
        // cout << solve(input) << endl;
        int n;
        cin>>n;
        vector<int>dp(n+1,1e9);
// state=dp[i]=no of steps need to convert integer i to zero;
// transition-->  dp[i]=min(dp[i-digit]+1)

        dp[0]=0;
        for(int i=1;i<=n;i++){
            string str=to_string(i);
            for(auto c:str){
                int digit=c-'0';
                if(digit!=0)
                dp[i]=min(dp[i],1+dp[i-digit]);
            }

        }
        cout<<dp[n]<<endl;
    }
    return 0;
}
