// F. We Were Both Children
//link: https://codeforces.com/problemset/problem/1850/F
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
    
    // Main logic goes here
    ll mx = 0;
    vl freq(n+1, 0);
    vl divCount(n+1, 0);
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        if(x<=n){
            freq[x]++;
        }
    }

    for(int i=1; i<=n; i++){
        if(freq[i]==0) continue;
        for(int j=i; j<=n; j+=i){
            divCount[j] += freq[i];
        }
    }

    for(int i=1; i<=n; i++){
        if(divCount[i] > mx){
            mx = divCount[i];
        }
    }

    cout << mx << endl;
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