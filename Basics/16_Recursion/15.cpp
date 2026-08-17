// U. Knapsack
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
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

int n, w;
int weight[20], val[20];

int knapsack(int idx, int re_w){
    if(idx==n || re_w==0){
        return 0;
    }

    int skip = knapsack(idx+1, re_w);

    int pick = 0;
    if(weight[idx] <= re_w){
        pick = val[idx] + knapsack(idx+1, re_w-weight[idx]);
    }

    return max(skip, pick);
}

void solve() {
    
    cin >> n >> w;
    
    // Main logic goes here
    for(int i=0; i<n; i++){
        cin >> weight[i] >> val[i];
    }

    cout << knapsack(0, w) << endl;

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}