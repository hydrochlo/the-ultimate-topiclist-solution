// M. Lucky Numbers
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M
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

bool isLucky(int x){
    bool lucky = true;
    while(x>0){
        int y = x%10;
        if(y!=4 && y!=7){
            lucky = false;
            return lucky;
        }
        x /= 10;
    }
    return lucky;
}

void solve() {
    
    int a, b;
    cin >> a >> b;

    // cout << isLucky(a) << endl;
    bool p = false;
    for(int i=a; i<=b; i++){
        if(isLucky(i)) {
            cout << i << " ";
            p = true;
        }
    }

    if(!p) cout << -1;
    
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}