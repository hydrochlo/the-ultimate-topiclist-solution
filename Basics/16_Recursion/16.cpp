// C - 1 2 1 3 1 2 1
//link: https://atcoder.jp/contests/abc247/tasks/abc247_c
//author: https://atcoder.jp/users/iam_phoenix
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

string series(int i){
    if(i==1) return "1 ";
    string s = to_string(i) + " ";
    return series(i-1) + s + series(i-1);
}

void solve() {
    
    int n;
    cin >> n;
    
    cout << series(n) << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}