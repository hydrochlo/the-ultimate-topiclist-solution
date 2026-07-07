// F. Equation
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
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
    int x, n;
    cin >> x >> n;

    if(n%2 != 0) n--;
    // cout << n << endl;
    // int i=2, res=1;
    // while(i>0){
    //     res *= x;
    //     i--;
    // }
    // cout << res << endl;

    ll sum = 0;
    for(int i=n; i>0; i-=2){
        // cout << "i = " << i << endl;
        ll res = 1;
        int j=i;
        while(j>0){
            res *= x;
            j--;
        }
        // cout << res << endl;
        sum += res;
        // cout << sum << endl;
    }
    cout << sum << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}