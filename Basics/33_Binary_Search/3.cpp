//C. Closest to the Right
//link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
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

int founD(vl &arr, int size, int val){
    int st = 0;
    int end = size - 1;

    int cnt = size+1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(arr[mid]>=val){
            cnt = mid+1;
            end = mid-1;
        } else st = mid + 1;
    }
    return cnt;
}

void solve() {
    
    int n, k;
    cin >> n >> k;

    vl a(n), b(k);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<k; i++) cin >> b[i];
    
    for(int i=0; i<k; i++){
        cout << founD(a, n, b[i]) << endl;
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}