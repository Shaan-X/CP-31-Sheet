#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

ll solve(){
    int n ; cin >> n; 
    ll sum = 0;
    vector<ll> arr(n);
    loop(i, 0, n) cin >> arr[i];

    int ones = 0, zeros = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] == 1) ones++;
        if(arr[i] == 0) zeros++;
        sum += arr[i];
    }
    
    if(sum == 1) {//means s-1 == 0
        return pow(2, zeros);
    }

    if(ones == 0) return 0;

    if(ones == 1){
        //no zeros
        if(zeros == 0){
            return 1;
        }
        //there are zeros
        return pow(2, zeros);
    }
    //case left: number of ones > 1
    //if(ones > 1){
        //no zeros
    if(zeros == 0){
        return ones;
    }
    //there are zeros
    return (pow(2, zeros) * ones);
    
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