// Y. Number of Ways
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y
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

int countWays(int start, int end){
    if(start>end) return 0;
    if(start==end) return 1;

    int way1 = countWays(start+1, end);
    int way2 = countWays(start+2, end);
    int way3 = countWays(start+3, end);

    return way1 + way2 + way3;
}

void solve() {
    int st, en;
    cin >> st >> en;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}