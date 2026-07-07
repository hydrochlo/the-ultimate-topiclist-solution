// U. Some Sums
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U
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

int sumOfDigit(int n){
    int sum = 0;
    while(n>0){
        int x = n%10;
        sum += x;
        n /= 10;
    }
    return sum;
}

void solve() {
    
    int n, a, b, res = 0;
    cin >> n >> a >> b;

    for(int i=1; i<=n; i++){
        if(sumOfDigit(i)>=a && sumOfDigit(i)<=b){
            res += i;
        }
    }
    cout << res << endl;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}