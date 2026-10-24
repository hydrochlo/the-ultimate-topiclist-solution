// B. Aliquot Sum
//link: https://codeforces.com/gym/103373/problem/B
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

static const int MAXN = 1000000;


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vi s(MAXN+1, 0);

    // build aliquot sum using harmonic divisor contribution
    for(int d=1; d<= MAXN/2; d++){
        for(int m = 2*d; m<=MAXN; m+=d){
            s[m] += d;
        }
    }

    int t;
    cin >> t;
    while (t--) {
       int n; 
       cin >> n;

       if(s[n] == n) cout << "perfect" << endl;
       else if(s[n] > n) cout << "abundant" << endl;
       else cout << "deficient" << endl;
    }

    return 0;
}