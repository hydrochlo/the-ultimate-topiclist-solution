// H. Honey Cake
//link: https://codeforces.com/problemset/problem/2181/H
//author: https://codeforces.com/profile/iam-phoenix
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

vl get_divisors(ll num){
    vl divisors;
    for(ll i=1; i*i<=num; i++){
        if(num%i==0) {
            divisors.pb(i);
            if(i != num/i) divisors.pb(num/i);
        }
    }

    sort(divisors.begin(), divisors.end());
    return divisors;
}

void solve() {
    
    ll w, h, d, n;
    cin >> w >> h >> d >> n;

    auto divisors = get_divisors(n);

    for(auto x: divisors){
        if(w%x != 0) continue;
        for(auto y: divisors){
            if(h%y != 0) continue;
            ll prod = x*y;
            if(prod>n || n%prod!=0) continue;
            ll z = n/prod;
            if(d%z==0){
                cout << (x-1) << " " << (y-1) << " " << (z-1) << endl;
                return;
            }
        }
    }

    cout << -1 << endl;
    return;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while (t--) {
    //    solve();
    //}
    
    solve();

    return 0;
}