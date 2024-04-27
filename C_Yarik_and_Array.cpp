
    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
    const int MOD =1e9+7;
     int maxSub(vector<int>&arr, int n){
        
        int maxvalue=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
             maxvalue=max(sum,maxvalue);
          
            if(sum<0 ||(abs(arr[i])%2==abs(arr[i+1])%2&& i<n-1)){
                sum=0;
            }
        }
        return maxvalue;
        
    }
    void solve(){
     int n;
            cin>>n;
            vector<int>arr(n);
            
            for(auto &it:arr){
                cin>>it;
            }
        
           int ans=maxSub(arr,n);
           cout<<ans<<endl;
    }
    int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);
    int tc;
    cin>>tc;
     while(tc--){
    solve();
    }
    return 0;
    }