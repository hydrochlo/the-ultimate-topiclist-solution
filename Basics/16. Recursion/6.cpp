// F. Print Even Indices
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F
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

void printEvenIndices(vl &a, int n){
    if((n-1)<0) return;
    if((n-1)%2 == 0) cout << a[n-1] << " ";
    printEvenIndices(a, n-1);
}

void solve() {
    
    int n;
    cin >> n;

    vl a;
    for(int i=0; i<n; i++) {
        ll x;
        cin >> x;
        a.pb(x);
    }

    printEvenIndices(a, n);

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}