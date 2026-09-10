// DIVSUM - Divisor Summation
//link: https://www.spoj.com/problems/DIVSUM/
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

    if(n==1){
        cout << 0 << endl;
        return;
    }

    ll sum = 0;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            sum += i;
            if(i != n/i) sum += n/i;
        }
    }

    cout << sum+1 << endl;
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