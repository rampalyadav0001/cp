#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD = 1e9 + 7;

int check(int a, int k) {
    int i = 2;
    while (a > k) {
        k *= i;
        i++;
    }
    return k - a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

       if(k==4){
        int a=k,ans=2;
        for(int i=0;i<n;i++){
            if(arr[i]%4==0){
                a=0;
                break;
            }
            else{
                if(a>k-arr[i]%k){
                    a=k-arr[i]%k;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                ans=max(ans-1,0);
            }
        }
        cout<<min(ans,a)<<endl;

       }
       else{
        int temp=k;
        for(int i=0;i<n;i++){
            if(arr[i]%k==0){
                temp=0;
                break;
            }
            else{
                if(temp>k-arr[i]%k){
                    temp=k-arr[i]%k;
                }
            }
        }
        cout<<temp<<endl;
       }
    }

    return 0;
}
