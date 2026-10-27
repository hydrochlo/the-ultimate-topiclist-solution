// H. count a's
//link: https://codeforces.com/group/c3FDl9EUi9/contest/262795/problem/H
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


int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int len = s.length();
    // cout << len << endl;

    vi prefix(len+1, 0);
    for(int i=0; i<len; i++){
        if(s[i]=='a'){
            prefix[i+1] = 1;
        }
        prefix[i+1] += prefix[i];
    }

    // for(int i=1; i<=len; i++){
    //     cout << i << " -> " << prefix[i] << endl;
    // }


    int t;
    cin >> t;
    while (t--) {
       int l, r;
       cin >> l >> r;
       cout << prefix[r] - prefix[l-1] << endl; 
    }

    return 0;
}