#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int n; cin >> n;
    int dig = digits(n);
    //cout << dig << endl;
    if(dig == 2){
        return 9 + n / 10;
    }
    if(dig == 3){
        return 9 * 2 + n / 100;
    }
    if(dig == 4){
        return 9 * 3 + n / 1000;
    }
    if(dig == 5){
        return 9 * 4 + n / 10000;
    }
    if(dig == 6){
        return 9 * 5 + n / 100000;
    }
    return n;
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
        cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}