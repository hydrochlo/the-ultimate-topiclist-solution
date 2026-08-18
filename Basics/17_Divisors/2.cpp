// How Many Divisors?
//link: https://vjudge.net/problem/Aizu-ITP1_3_D
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


void solve() {
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int cnt = 0;
    
    // Main logic goes here

    if(a==b && b==c){
        cout << 1 << endl;
        return;
    }

    for(int i=1; i<=c; i++){
        if(c%i==0 && (i>=a && i<=b)){
            // cout << i << endl;
            cnt++;
        }
    }

    cout << cnt << endl;
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