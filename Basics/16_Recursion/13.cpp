// C. Factorials and Powers of Two
//link: https://codeforces.com/problemset/problem/1646/C
//author: https://codeforces.com/profile/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vl = vector<ll>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define endl '\n'

const ll INF = 1e18;

ll setbits(ll n) { return __builtin_popcountll(n); }

void solve() {
    
    ll n;
    cin >> n;
    
    // Main logic goes here
    vl fact(15);
    fact[0] = 1;

    for(int i=1; i<=14; i++){
        fact[i] = fact[i-1]*i;
    }

    vl vec;
    for(int i=3; i<=14; i++)
        vec.pb(fact[i]);
    
    ll ans = INF;
    for(int mask=0; mask<(1LL << 12); mask++){
        ll sum = 0;
        ll cnt = 0;

        for(int i=0; i<12; i++){
            if(mask & (1LL << i)){
                sum += vec[i];
                cnt++;
            }
        }

        if(sum > n) continue;
        cnt += setbits(n - sum);
        ans = min(cnt, ans);
    }
    cout << ans << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}