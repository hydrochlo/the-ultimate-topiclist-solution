// C. Fadi and LCM
//link: https://codeforces.com/problemset/problem/1285/C
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

ll lcm(ll a, ll b){
    return a/gcd(a, b) * b;
}

void solve() {
    
    ll n;
    cin >> n;
    
    // Main logic goes here
    if(n==1) {
        cout << 1 << " " << 1 << endl;
        return;
    }

    ll ans;

    for(ll i=1; i*i<=n; i++){
        if(n%i==0 && lcm(i, n/i)==n){
            ans = i;
        }
    }

    cout << ans << " " << n/ans << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}