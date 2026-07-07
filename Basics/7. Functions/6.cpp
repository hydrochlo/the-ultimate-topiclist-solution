// J. Primes from 1 to n
//link: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J
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

bool isPrime(int n){
    bool prime = true;
    for(int i=2; i<=(n/2); i++){
        if(n%i==0){
            prime = false;
            return prime;
        }
    }
    return prime;
}

void solve() {
    
    int n;
    cin >> n;

    for(int i=2; i<=n; i++){
        if(isPrime(i)) cout << i << " ";
    }

}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}