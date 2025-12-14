// 71 A. Way Too Long Words

#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios::sync_with_stdio(false); cin.tie(nullptr);

using ll = long long;
using ull = unsigned long long;
using ld = long double;

using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vll = vector<ll>;

const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

#define pb push_back
#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

ll mod_add(ll a, ll b) { return (a + b) % MOD; }
ll mod_sub(ll a, ll b) { return (a - b + MOD) % MOD; }
ll mod_mul(ll a, ll b) { return (a * b) % MOD; }

ll mod_pow(ll base, ll exp) {
    ll res = 1;
    while (exp) {
        if (exp & 1) res = mod_mul(res, base);
        base = mod_mul(base, base);
        exp >>= 1;
    }
    return res;
}

template<typename T>
void read_vec(vector<T>& v, int n) {
    v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
}


void solve() {
    string s;
    cin >> s;
    if (s.length() > 10) {
        string res = string(1, s[0]) + to_string(s.length()-2) + s[s.length()-1];
        cout << res << "\n";
    } else {
        cout << s << "\n";
    }
}


int main() {
    FAST_IO;

    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
