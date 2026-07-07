// C. Wonderful Number
//link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/C
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

string getString(ll n){
    string result = "";
    while(n>0){
        if(n%2) result.push_back('1');
        else result.push_back('0');
        n /= 2;
    }
    return result;
}

bool isPrime(string a){
    string b = a;
    reverse(b.begin(), b.end());

    return b==a;
}

void solve() {
    
    ll n;
    cin >> n;
    
    // Main logic goes here
    if(!(n%2)){
        no;
        return;
    }
    string s = getString(n);
    bool x = isPrime(s);
    if(x) yes;
    else no;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();

    return 0;
}