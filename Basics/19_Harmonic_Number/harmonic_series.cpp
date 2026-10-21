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
    
    int n = 10;
    // cin >> n;
    int divisorCount[11] = {0};
    int sumOfDiv[11] = {0};

    // For counting Divisors
    for (int i=1; i<=10; i++){
        // cout << i << " --> ";
        for(int j=i; j<=n; j+=i){
            // cout << " touched " << j << ", ";
            divisorCount[j]++;
        }
        // cout << endl;
    }

    // For counting sum of Divisors
    for(int i=1; i<=10; i++){
        for(int j=i; j<=n; j+=i){
            sumOfDiv[j] += i;
        }
    }

    // For printing Divisors
    vector<int> divs[11];
    for(int i=1; i<=10; i++){
        for(int j=i; j<=n; j+=i){
            divs[j].pb(i);
        }
    }

    // Outputs
    for (int i=1; i<=10; i++){
        cout << i << " -> " << divisorCount[i];
        cout << " --> " << sumOfDiv[i] << endl;
    }

    for(int i=1; i<=10; i++){
        cout << i << " ---> ";
        for(const auto &div: divs[i]){
            cout << div << " ";
        }
        cout << endl;
    }


}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}