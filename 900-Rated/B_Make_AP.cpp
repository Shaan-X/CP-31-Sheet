#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

bool solve(){
    /* use long long for overflow */
    int a, b, c; cin >> a >> b >> c;
   
    ll a, b, c; cin >> a >> b >> c;
   
    bool ans = false;
    ll one = (2 * b - c) / a;
    if(one > 0){
        if ((2 * b - c) % a == 0) ans = true;
    } 

    ll two = (a + c) / (2 * b);
    if(two > 0 ){
        if((((a + c) / 2) % b == 0) && ((c - a) % 2 == 0)) ans = true;
    } 
   
    ll three = (2 * b - a) / c;
    if(three > 0 ){
        if((2 * b - a) % c == 0) ans = true;
    } 
    if(ans) return 1;

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
        bool ans = solve();
       // cout << ans << endl;
        cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}