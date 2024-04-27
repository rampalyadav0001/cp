// LUOGU_RID: 138401970
#include <bits/stdc++.h>
#define For(i, a, b) for (i32 i = (a), endi = (b); i <= endi; ++i)
#define foR(i, a, b) for (i32 i = (a), endi = (b); i >= endi; --i)
#define ForE(i, u) for (i32 i = head[u]; i; i = e[i].nxt)
using namespace std;

using i32 = int;
using u32 = unsigned int;
using i64 = long long;
using u64 = unsigned long long;
using f64 = long double;
using pii = pair<i32,i32>;
using pll = pair<i64,i64>;

const i32 MAXN = 2e5+2;
const i32 SZ = 1e6+6;
const i32 INF = 0x7fffffff;

// struct edge { i32 u,v; } e[MAXN<<1];
// i32 tot, head[MAXN];
// void add(i32 u, i32 v) { e[++tot] = {v,head[u]}; head[u] = tot; }

i32 n,d[SZ];
i32 lowbit(i32 x) { return x&-x; }
void add(i32 i, i32 k) { while(i <= 1e6) d[i] += k, i += lowbit(i); }
i32 query(i32 i) { i32 res = 0; while(i) res += d[i], i -= lowbit(i); return res; }

i32 m,q,u,v,op,x,k,ans1[MAXN];
i32 a[MAXN];
void solve()
{
    cin >> n; i64 ans = 0;
    For(i,1,n) cin >> x, a[i] = abs(x)+1;
    For(i,1,n) ans1[i] = query(a[i]-1), add(a[i],1);
    fill(d+1,d+SZ,0);
    foR(i,n,1) ans += min(ans1[i], query(a[i]-1)), add(a[i],1);
    cout << ans << '\n';
}
int main() 
{
    ios::sync_with_stdio(0);        
    cin.tie(0); cout.tie(0);
    i32 T = 1; 
    // cin >> T;
    while(T--) solve();
    return 0;
}