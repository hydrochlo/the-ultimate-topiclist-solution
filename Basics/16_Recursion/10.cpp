// Tower of Hanoi 
//link: https://vjudge.net/problem/CSES-2165
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

void TOH(int n, int A, int B, int C){
    if(n>0){
        TOH(n-1, A, C, B);
        cout << A << " " << C << endl;
        TOH(n-1, B, A, C);
    }
}

void solve() {
    
    int n;
    cin >> n;

    cout << pow(2, n) - 1 << endl;
    TOH(n, 1, 2, 3);
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}