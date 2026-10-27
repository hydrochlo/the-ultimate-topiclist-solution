// D. Odd Queries
//link: https://codeforces.com/contest/1807/problem/D
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
    
    int n, q;
    cin >> n >> q;
    
    // Main logic goes here
    vl arr(n+1, 0);
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    for(int i=0; i<q; i++){
        ll l, r, k;
        cin >> l >> r >> k;
        ll new_sum = (r - l + 1) * k;
        // cout << "new sum = " << new_sum << endl;
        // cout << "r to last = " << arr[r] << endl;
        ll res = arr[l-1] + new_sum + (arr[n]-arr[r]);
        // cout << res << endl;
        if(res%2!=0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

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