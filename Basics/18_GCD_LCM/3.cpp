// C. Common Divisors
//link: https://codeforces.com/problemset/problem/1203/C
//author: https://codeforces.com/profile/iam-phoenix
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vs = vector<string>;
using vvs = vector<vs>;
using vl = vector<ll>;
using vpl = vector<pair<ll,ll>>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define allr(a) a.rbegin(), a.rend()
#define sz(x) (int)(x).size()
#define endl '\n'
#define no cout << "NO" << endl
#define yes cout << "YES" << endl

ll countDivisors(ll n){
    ll ans = 1;
    for(ll i=2; i*i<=n; i++){
        int count=0;
        while(n%i == 0){
            n /= i;
            count++;
        }
        ans *= (count + 1);
    }

    if(n > 1) ans *= 2;
    return ans;
}

void solve() {
    
    ll n;
    cin >> n;
    
    // Main logic goes here
    vl a;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        a.pb(x);
    }

    ll g = 0;
    for(int i=0; i<n; i++){
        g = gcd(g, a[i]);
    }

    cout << countDivisors(g) << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}