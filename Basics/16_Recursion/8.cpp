// Weird Algorithm
//link: https://cses.fi/problemset/task/1068
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

void weirdAlgorithm(ll n){
    if(n<=1){
        cout << n << " ";
        return;
    }
    if(n%2 == 0){
        cout << n << " ";        
        weirdAlgorithm(n/2);
    }
    else {
        cout << n << " ";
        weirdAlgorithm(n*3 + 1);
    }
}

void solve() {
    
    ll n; 
    cin >> n;

    weirdAlgorithm(n);
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}