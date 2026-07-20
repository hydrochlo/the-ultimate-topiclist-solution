// Hello Recursion
//link: https://vjudge.net/problem/SPOJ-HRECURS
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

int p = 1;

int sumOfArr(vi &a, int n){
    if(n<0) return 0;
    return a[n] + sumOfArr(a, n-1);
}

void solve() {
    
    int n;
    cin >> n;

    vi a;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.pb(x);
    }
    n--;

    int result = sumOfArr(a, n);

    cout << "Case " << p++ << ": " << result << endl;    
    
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