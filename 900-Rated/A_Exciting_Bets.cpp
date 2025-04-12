// Problem: A. Exciting Bets
// Contest: Codeforces - Codeforces Round 730 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1543/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    ll a, b; cin >> a >> b;
    if(a == b) {
        cout << 0 <<  " " << 0 << endl;
        return 0;
    }
    ll exci = abs(a - b);
    
    ll moves = exci - (a % exci);
    
    if(a == 1 or b == 1 or a == 0 or b == 0) {
        cout << exci <<  " " << 0 << endl;
        return 0;
    }
    cout << exci <<  " " << moves << endl;
    
    return 0;
}
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int ans = solve();
        //cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}
