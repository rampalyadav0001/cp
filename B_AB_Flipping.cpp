#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string ans;
        cin>>ans;

        long long a_count=0;
        long long b_count=0;
        long long idxb=0;
        long long idxa=0;
        for(long long i=0; i<n; i++){
            if(ans[i]=='A'){
                 idxa=i;
                 break;}
        }
        for(long long i=0; i<n; i++){
            if(ans[i]=='B') idxb=i;
        }
        for(int i=0; i<idxb; i++){
            if(ans[i]=='A') a_count++;
            else if(ans[i]=='B') b_count++;
        }
        if (a_count==0) cout<<a_count<<endl;
        else cout<<a_count+b_count-idxa<<endl;
    }
 return 0;
}