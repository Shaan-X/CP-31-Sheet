#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    loop(i, 0, n) cin >> arr[i];
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; i++){
        arr[i] = abs(arr[i] - arr[i+1]);
    }
    int count = 0, ans = INT_MIN;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] <= k) count++;
        else{
            ans = max(count, ans);
            count = 0;
        }
    }
    cout <<  n - (max(ans,count) + 1) << endl;
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
     //   cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}