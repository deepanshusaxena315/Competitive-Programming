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
    string s,t;
    cin>> s>> t;
    int i=s.size()-1;
    int j = t.size()-1;
    unordered_map<char,int> mp;
    while(j>=0){
        mp[t[j--]]++;
        
    }
    while(i>=0){
        if(mp.find(s[i])!=mp.end()){
            mp[s[i]]--;
            if(mp[s[i]]==0) mp.erase(s[i]);

        }
        else{
            s[i] = '.';
        }
        i--;
    }
    string final ;
    for(auto ch:s){
        if(ch!='.'){
            final += ch;
        }

    }
    if(final==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main() {
    fastio();
    int t = 1;
    cin >> t;
    while (t--) solve();
}