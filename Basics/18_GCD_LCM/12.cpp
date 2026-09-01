// D. Swords
//link: https://codeforces.com/problemset/problem/1216/D
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

int gcd(int a, int b){
    while(a!=0 && b!=0){
        if(a>b) a %= b;
        else b %= a;
    }
    return max(a, b);
}

void solve() {
    
    int n;
    cin >> n;
    
    // Main logic goes here
    vi a(n);
    ll sum = 0;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    int mx = *max_element(a.begin(), a.end());
    int g = mx - a[0];

    for(int i=1; i<n; i++){
        g = gcd(g, mx-a[i]);
    }

    ll ans = (mx * 1ll * n - sum) / g;
    cout << ans << " " << g << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}