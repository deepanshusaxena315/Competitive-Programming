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

bool check(string &a,string &b){
    if(a.find(b)!=string::npos){
        return true;
    }
    return false;
}

void solve() {
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x>>s;
    if(check(x,s)){
        cout<<0<<endl; return;
    }
    int flag = false;
    for(int i=0;i<5;i++){
        x = x +x;
        if(check(x,s)){
            flag = true;
            cout<<i+1<<endl;
            break;
        }
    }
    if(flag==false) cout<<-1<<endl;

}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
}