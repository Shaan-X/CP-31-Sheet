#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int n, k, x;
    cin >> n >> k >> x;
    if(x > 1) {
        cout << "YES" << endl;
        cout << n << endl;
        while(n--) cout << 1 << " ";        
        cout << endl;
        return 1;
    }

    if(n % 2 == 0) {
        if(k > 1) {
           // return 1;
           cout << "YES" << endl;
           int len = n / 2;
           cout << len << endl;
            while(len--) cout << 2 << " ";
            cout << endl;
            return 1;
        }
    }
    if(k > 2) {
        cout << "YES" << endl;
        int len = (n - 3) / 2;
        cout <<  len + 1 << endl;
        cout << 3 << " ";
        while(len--) cout << 2 << " ";
        cout << endl;
        return 1;
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
        //cout << ans << endl;
      //  cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}