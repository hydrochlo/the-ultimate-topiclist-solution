// Number of common divisors
//link: https://www.spoj.com/problems/COMDIV/
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

const int MAXN = 1000002;
vi divCount(MAXN);

void solve() {
    
    int n, m;
    cin >> n >> m;

    int g = gcd(n, m);

    cout << divCount[g]+1 << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for(int i=2; i<MAXN; i++){
        for(int j=i; j<MAXN; j+=i){
            divCount[j]++;
        }
    }

    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}