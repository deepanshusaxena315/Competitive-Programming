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
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    int ops = 0;
    bool isPossible = true;
    for(int i=n-2;i>=0;i--){
        while(a[i]>=a[i+1] && a[i]>0){
            a[i] = a[i]/2;
            ops++;
        }
        if(a[i]>=a[i+1]){
            isPossible = false;
            break;
        }
    }
    if(isPossible){
        cout<<ops<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
}