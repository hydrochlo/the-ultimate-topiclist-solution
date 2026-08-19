// C. Product of Three Numbers
//link: https://codeforces.com/problemset/problem/1294/C
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

    vi factors;

    for(int i=2; i*i<=n; i++){
        if(n%i!=0) continue;
        factors.push_back(i);
        n/=i;
        if(factors.size()==2) break;
    }

    if(n==1 || factors.size()<2 || n==factors[0] || n==factors[1]){
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << factors[0] << " " << factors[1] << " " << n << endl;

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