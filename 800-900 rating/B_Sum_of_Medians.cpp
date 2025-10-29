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
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> a(n*k);
    for(auto &x: a) cin>>x;
    int medianIdx = n/2;
    if(n%2==0) medianIdx = n/2+1;
    else medianIdx = (n+1)/2;
    medianIdx = n/2 +1;
    int Idx = n*k-medianIdx+1;
    int ans = 0;
    while(k){
        ans += a[Idx-1];
        k--;
        Idx -= medianIdx;
    }
    cout<<ans<<endl;

}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
}