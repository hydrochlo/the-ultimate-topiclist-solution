// Apple Division
//link: https://cses.fi/problemset/task/1623
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

void divide_apples(vl &weights, ll &ans, int idx, ll g1, ll g2){
    if(idx == (int)weights.size()){
        ans = min(ans, abs(g1-g2));
        return;
    }

    // Two choices
    // 1. Add current apple to g1
    divide_apples(weights, ans, idx+1, g1+weights[idx], g2);

    // 2. Add current apple to g2
    divide_apples(weights, ans, idx+1, g1, g2+weights[idx]);
}

void solve() {
    
    int n;
    cin >> n;

    vl weights;
    for(int i=0; i<n; i++) {
        ll x;
        cin >> x;
        weights.pb(x);
    }

    ll ans = 1e18;
    int start = 0;

    divide_apples(weights, ans, start, 0, 0);

    cout << ans << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}