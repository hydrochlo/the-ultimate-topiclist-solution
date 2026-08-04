// A. Binary Search
//link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
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

void found(vl &a,int size, int target){
    int st = 0;
    int end = size-1;

    while(st<=end){
        int mid = st + (end-st)/2;
        if(target==a[mid]){
            cout << "YES" << endl;
            return;
        } else if(target>a[mid]){
            st = mid+1;
        } else end = mid-1;
    }
    cout << "NO" << endl;

}

void solve() {
    
    int n, t;
    cin >> n >> t;
    
    // Main logic goes here
    vl a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    vl target(t);
    for(int i=0; i<t; i++) cin >> target[i];

    for(int i=0; i<t; i++){
        found(a, n, target[i]);
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}