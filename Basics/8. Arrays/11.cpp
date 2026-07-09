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
    
    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    vi res;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            int high = INT_MIN;
            for(int k=i; k<=i+j; k++){
                //cout << arr[k] << " ";
                if(a[k]>high){
                    high = a[k];
                }
            }
            res.push_back(high);
        } 
    }

    int len = res.size();

    for(int i=0; i<len; i++){
        cout << res[i] << " ";
    }
    cout << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
       solve();
    }

    return 0;
}

// 1 6 3 7 6 6 7 6 7 7
// 1 6 6 7 6 6 7 3 7 7