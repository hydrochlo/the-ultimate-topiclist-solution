// H. Two numbers
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H
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

int floorr(int n, int m){
    return n/m;
}

int ceill(int n, int m){
    if(n%m == 0) return n/m;
    return n/m + 1;
}

int roundd(int n, int m){
    float x = (1.0*n / m) + 0.5;
    return (int)x;
}

void solve() {
    
    int n, m;
    cin >> n >> m;

    cout << "floor " << n << " / " << m << " = " << floorr(n, m) << endl;
    cout << "ceil " << n << " / " << m << " = " << ceill(n, m) << endl;
    cout << "round " << n << " / " << m << " = " << roundd(n, m) << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}