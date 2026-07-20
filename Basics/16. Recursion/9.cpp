// R. Palindrome Array
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/R
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

int isPalindromeArray(vi &a, int st, int end){
    if(st>=end) return 1;
    if(a[st]!=a[end]) return 0;
    return isPalindromeArray(a, st+1, end-1);
}

void solve() {
    
    int n; 
    cin >> n;

    vi a;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        a.pb(x);
    }

    if(isPalindromeArray(a, 0, n-1)) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}