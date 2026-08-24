// A. Bestie
//link: https://codeforces.com/problemset/problem/1732/A
//author: https://codeforces.com/profile/
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

void solve(){
    int n;
    cin >> n;

    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int gcD = a[0];

    for(int i=1; i<n; i++){
        gcD = gcd(gcD, a[i]);
    }

    if(gcD==1){
        cout << 0 << endl;
        return;
    }

    int ans = INT_MAX;
    for(int i=0; i<n; i++){
        int temp = a[i];
        a[i] = gcd(a[i], i+1);
        int g = a[0];

        for(int j=1; j<n; j++){
            g = gcd(g, a[j]);
        }

        if(g==1){
            ans = min(ans, n-i);
        }
        a[i] = temp;
    }

    for(int i=0; i<n; i++){
        int tempI = a[i];
        a[i] = gcd(a[i], i+1);

        for(int j=1; j<n; j++){
            int tempJ = a[j];
            a[j] = gcd(a[j], j+1);
            int g = a[0];
            for(int k=0; k<n; k++){
                g = gcd(g, a[k]);
            }

            if(g==1){
                ans = min(ans, (n-i)+(n-j));
            }

            a[j] = tempJ;
        }

        a[i] = tempI;
    }

    cout << ans << endl;

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