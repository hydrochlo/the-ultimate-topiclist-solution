// M. Replace MinMax
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M
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
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    
    int largest = INT_MIN, large_idx = 0;
    int smallest = INT_MAX, small_idx = 0;

    for(int i=0; i<n; i++){
        if(a[i] > largest){
            largest = a[i];
            large_idx = i;
        }
        if(a[i] < smallest){
            smallest = a[i];
            small_idx = i;
        }
    }

    a[large_idx] = smallest;
    a[small_idx] = largest;

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}