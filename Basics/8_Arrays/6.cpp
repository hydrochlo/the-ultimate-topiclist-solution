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

int F[45];

int fibo(int n){
    
    if(n<=1) {
        F[n] = n;
        return n;
    }
    if(F[n-2]==-1){
        F[n-2] = fibo(n-2);
    }
    if(F[n-1]==-1){
        F[n-1] = fibo(n-1);
    }
    return F[n-2] + F[n-1];
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

    for(int i=0; i<45; i++){
        F[i] = -1;
    }
    solve();

    return 0;
}