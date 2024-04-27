#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long
const int MOD =1e9+7;
void solve(){
int n;
cin>>n;
vector<int>arr(n);
for(int &it:arr){
    cin>>it;
}
int pivot=0;
int start=0,end=0;

for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
        pivot=i-1;
        break;
    }
}
start=pivot;
bool flag=false;
for(int i=pivot;i<n;i++ ){
    if(pivot>0&&arr[i]<arr[pivot-1]){
        cout<<"no"<<endl;
        return;
    }
}
for(int i=pivot;i<n-1;i++){
    if(arr[i+1]>arr[i]){
        if(arr[i+1]<arr[pivot]){
            cout<<"no"<<endl;
            return;
        }
        flag=true;
        end=i;
        break;
    }
    
}
if(!flag)end=n-1;
cout<<"yes"<<endl;
cout<<start +1<<" "<<end+1<<endl;
}
int main() {
ios::sync_with_stdio(false);cin.tie(NULL);
int tc=1;
// cin>>tc;
 while(tc--){
solve();
}
return 0;
}