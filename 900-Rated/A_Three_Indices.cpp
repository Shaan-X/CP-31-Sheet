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

    vector<int> arr(n);
    loop(i, 0, n) cin >> arr[i];
    vector<int> left(n, -1);
    vector<int> right(n, -1);

    int mintillnow = INT_MAX;
    for(int i = 0; i < n; i++){
        left[i] = min(mintillnow, arr[i]);
    }
    mintillnow = INT_MAX;
    for(int i = n-1; i >=0; i--){
        right[i]  = min(mintillnow, arr[i]);
    } 
    bool ans = false;
    for(int i = 1; i < n-1; i++){
        if(arr[i] > left[i] and arr[i] > right[i]) {
            ans = true;
            cout << "YES" << endl;
            cout << left[i] << " " << arr[i] << " " << right[i] << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
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