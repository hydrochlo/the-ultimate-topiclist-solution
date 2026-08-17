// W. Reach Value
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/W
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

bool mul(ll n, ll x){
    if(x==n) return true;
    if(x>n) return false;

    int p = mul(n, x*10);
    int q = mul(n, x*20);

    return p||q;
}

void solve() {
    
    ll n;
    cin >> n;

    ll x = 1;
    int res = mul(n, x);

    if(res) cout << "YES" << endl;
    else cout << "NO" << endl;
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