// C. Insert and Equalize
//link: https://codeforces.com/problemset/problem/1902/C
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


void solve() {
    
    int n;
    cin >> n;
    
    // Main logic goes here
    vl a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    if(n==1) {
        cout << 1 << endl;
        return;
    }

    // Compute the difference of adjacent difference
    sort(a.begin(), a.end());

    ll x = 0;
    for(int i=1; i<n; i++){
        x = gcd(x, a[i]-a[i-1]);
    }

    if(x==0) x = 1;

    ll mx = a.back();
    ll sum = accumulate(a.begin(), a.end(), 0LL);

    // FInd the best res = mx - k*x not in array
    ll res = mx;
    int j = n - 1;

    while(true){
        // Move j to last element <= res
        while(j>=0 && a[j]>res){
            j--;
        }

        // If res is missing stop
        if(j<0 || a[j] != res){
            break;
        }
        
        // Otherwise try next smaller value
        res -= x;
    }
    
    ll ans = (mx * (n+1) - (sum+res)) / x;

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