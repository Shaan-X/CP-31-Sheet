#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int n; cin >> n; 
    vector<int> arr(n);
    int add = 0;
    for(int i = 0; i < n; i++){
       cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]) {
            add++;
        }
     }
     cout << n + add << endl;
     for(int i = 0; i < n - 1; i++){
        cout << arr[i] << " ";
        if(arr[i] > arr[i+1]) {
            cout << 1 << " ";
        }
     }
     cout << arr[n-1] << endl;
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
      //  cout << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}