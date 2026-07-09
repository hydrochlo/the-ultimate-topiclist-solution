// R. Permutation with arrays
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R
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

    vi A(n);
    vi B(n);

    for(int i=0; i<n; i++) cin >> A[i];
    for(int i=0; i<n; i++) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if(A==B) cout << "yes" << endl;
    else cout << "no" << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}