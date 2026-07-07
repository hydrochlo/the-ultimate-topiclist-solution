// E. Swap
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E
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

void swapp(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void solve() {
    
    int x, y;
    cin >> x >> y;

    swapp(x, y);
    cout << x << " " << y << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}