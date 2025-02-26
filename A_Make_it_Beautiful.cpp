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
    vector<int> a(n);
    loop(i, 0, n) cin >> a[i];
    int max = *max_element(a.begin(), a.end());
    int min = *min_element(a.begin(), a.end());
    if(max == min) cout << "NO" << endl;
    else{
        cout << "YES" << endl << max << " ";
        int flag = 0;
        for(int x : a){
            if(x != max){
                cout << x <<" ";
            }
            else if(x == max && flag >= 1)  cout << x << " ";
            else flag = 1;
        }
        cout << endl;
    }
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