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
    ll mini = n / 6;
    ll maxi = n / 4;
    ll rem4 = n % 4;
    ll rem6 = n % 6;
    if(rem4 == 0 && rem6 == 0){
        cout << mini << " " << maxi << endl;
    }
    else if(rem4 == 0 && rem6 != 0){
        cout << maxi << " " << maxi << endl;
    }
    else if(rem4 != 0 && rem6 == 0) {
        cout << mini << " " << mini << endl;
    }
    else cout << -1 << endl;
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