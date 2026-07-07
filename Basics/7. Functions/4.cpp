// L. GCD
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/L
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

int gcdd(int a, int b){
    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

void solve() {
    
    int n, m;
    cin >> n >> m;

    int result = gcdd(n, m);
    cout << result << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}