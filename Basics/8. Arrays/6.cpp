// Y. Easy Fibonacci
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y
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

int fibo(int n){
    if(n<=1) return n;
    return fibo(n-1) + fibo(n-2);
}

void solve() {
    
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        cout << fibo(i) << " ";
    }
    cout << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}