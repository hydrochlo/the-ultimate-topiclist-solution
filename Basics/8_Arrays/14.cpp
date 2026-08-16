// Q. Count Subarrays
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Q
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


void solve() {
    
    int n; 
    cin >> n;
    int ans = n;

    vi a(n);

    for(int i=0; i<n; i++) cin >> a[i];

    int k;
    for(int i=0; i<n; i++){
        k = i;
        while(k<n-1 && a[k]<a[k+1]){
            ans++;
            k++;
        }
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