// G. Palindrome Array
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
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
    
    int n, palindrome = 1;
    cin >> n;

    int mid = (n%2 == 0? n/2 - 1 : n/2);
    vl arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<=mid; i++){
        if(arr[i]!=arr[n-1-i]){
            palindrome = 0;
            break;
        }
    }

    if(palindrome) yes;
    else no;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}