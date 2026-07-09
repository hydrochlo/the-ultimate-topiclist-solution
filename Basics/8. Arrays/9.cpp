// H. Sorting
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
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

    vl a(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                ll temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}