// L. Max Subarray
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L
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


void solve() {
    
    // int n;
    // cin >> n;

    int arr[4] = {1,6,3,7};
    for(int i=0; i<4; i++){
        for(int j=i; j<4; j++){
            cout << " i = " << arr[i] <<  "  " << " j = " << arr[j] << endl;
        }
    }
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //int t;
    //cin >> t;
    //while (t--) {
    //    solve();
    //}
    
    solve();

    return 0;
}