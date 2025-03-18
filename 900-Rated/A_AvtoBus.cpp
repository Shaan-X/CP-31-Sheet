#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    ll n; cin >> n;
    ll mini = -1;
    ll maxi = -1;
   
    if(n % 4 == 2 || n % 4 == 0) maxi =  n / 4;
    if(n % 6 == 0) mini = n / 6;
    if(n % 6 == 2 || n % 6 == 4) mini = (n / 6) + 1;

    if(maxi == -1 || mini == -1 || n < 4) {
        cout << -1 << endl;
        return 0;
    }

    cout << mini << " " << maxi << endl;
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
      //  cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}