#include <bits/stdc++.h>
using namespace std;

// Type aliases
#define int long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int,int>
#define ff first
#define ss second

// Constants
const int MOD = 1e9 + 7;
const int INF = 1e18;

// Fast I/O
void fastio() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

// Debug template (enable only for local)
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << x << "\n";
#else
#define dbg(x)
#endif

// Modular operations
int add(int a, int b) { return (a + b) % MOD; }
int sub(int a, int b) { return (a - b + MOD) % MOD; }
int mul(int a, int b) { return (a * b) % MOD; }
int power(int a, int b) {
    int res = 1;
    while(b) {
        if(b & 1) res = mul(res, a);
        a = mul(a, a);
        b >>= 1;
    }
    return res;
}
int inv(int a) { return power(a, MOD - 2); } // For prime MOD

// Solve function

int calc(int n,int k){
    if(n<=0) return 0;
    if(n<k) return 0;
    int ans = (n+1-k) * (n+2-k)/2;
    return ans;
}
void solve() {
    int n,k,q;
    cin>>n>>k>>q;
    vector<int> a(n);
    for(auto &x: a)cin>>x;
    int currstreak = 0;
    int ans =0;
    for(int i=0;i<n;i++){
        if(a[i]<=q) currstreak++;
        else{
            ans += calc(currstreak,k);
            currstreak = 0;
        }
    }
    if(currstreak) ans+= calc(currstreak,k);
    cout<<ans<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
}