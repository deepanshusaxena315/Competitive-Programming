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
    vector<int> arr(n);
    for(auto &x:arr) cin>>x;
    unordered_map<int,int>mp;
    for(auto &x:arr){
        mp[x]++;
    }
    if(mp.size()>=3)cout<<"No"<<endl;
    else if(mp.size()==2){
        int firstfreq = 0,secondfreq=0;
        auto it = mp.begin();
        firstfreq = it->second;
        it++;
        secondfreq = it->second;
        if(abs(firstfreq-secondfreq)==0 || abs(firstfreq-secondfreq)==1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
       
    }
    else{
        cout<<"Yes"<<endl;
    }
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
}