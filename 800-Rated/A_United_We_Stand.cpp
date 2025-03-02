#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    //look for the max element and incude it in c array rest in b array 
    //if b array is empty ans = -1
    int n; cin >> n; 
    vector<int> arr(n);
    loop(i, 0, n) cin >> arr[i];
    int maxi = *max_element(arr.begin(), arr.end());

    int count = 0;
    for(int i = 0; i < n; i++) if(arr[i] == maxi) count++;
    if(count == n) { cout << -1 << endl; return -1; }
    cout << n - count << " " << count << endl;
    for(int i = 0; i < n; i++) if(arr[i] != maxi) cout << arr[i] << " ";
    cout << endl;
    while(count--) cout << maxi << " ";
    cout << endl;
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