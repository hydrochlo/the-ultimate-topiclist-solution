// 
//link: 
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

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b, a%b);
}

void solve() {
    
    ll a, b;
    cin >> a >> b;
    
    ll res;

    if(b%a==0){
        res = b * (b / a);
    } else {
        res = a * (b / gcd(a, b));
    }

    cout << res << endl;
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