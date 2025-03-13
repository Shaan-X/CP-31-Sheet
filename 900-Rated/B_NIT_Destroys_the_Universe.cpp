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
    int zero = 0; 
    vector<int> a(n);
    loop(i,0,n) {
        cin >> a[i];
        if(a[i] == 0) zero++;
    }
    if(zero == n) return 0;

    int ans = 0;
    for(int i = 0; i < n - 1; i++){
        if(a[i] != 0 && a[i+1] == 0) ans++;
    }
    if(a[0] != 0 && ans >= 1){
        cout << ans + 1 << endl;
        return 0;
    } 
    cout << max(ans, 1) << endl;
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