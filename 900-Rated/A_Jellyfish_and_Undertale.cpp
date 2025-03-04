#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

ll solve(){
    ll max_val, initial_time, n;
    cin >> max_val >> initial_time >> n;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    ll ans = 0;
    if(initial_time > 1){
        if(initial_time > max_val) initial_time = max_val;
        ans += initial_time - 1;
    }
    for(int i = 0; i < n; i++){
        ll current  = 1;
        current += arr[i];
        current = min(current, max_val);
        ans += current - 1;
    }
    
    return ans + 1;
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
        ll ans = solve();
        cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}