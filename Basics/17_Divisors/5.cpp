// C. Product of Three Numbers
//link: https://codeforces.com/problemset/problem/1294/C
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

bool isPrime(int x){
    for(int i=2; i<=sqrt(x); i++){
        if(x%i==0) return false;
    }
    return true;
}

void solve() {
    
    int n;
    cin >> n;
    
    int odd = 3, even = 2;

    // Main logic goes here
    if(isPrime(n)) cout << "NO" << endl;
    else {
        if(n%2){ // When number is odd;
            while(n>=odd){

                if(n%odd==0) cout << odd << endl;
                // n/=odd;
                odd+=2; 
                
            }
        } else {
            while(n>=even){
                if(n%even==0) cout << even << endl;
                // n/=even;
                even+=2; 
            }
        }
    }
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