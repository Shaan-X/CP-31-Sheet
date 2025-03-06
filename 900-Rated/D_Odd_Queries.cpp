#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

//prefix sum
int solve(){
    int n, q; cin >> n >> q;
    vector<int> pre_sum(n,0);
    int presum = 0;
    loop(i, 0, n) {
        int x; cin >> x;
        presum += x;
        pre_sum[i] = presum;
    }
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        int first = (l == 1 ? 0 : pre_sum[l-2]);
        int sum = first +  k * (r - l + 1) + (pre_sum[n-1] - pre_sum[r-1]);
       // cout << first << "  " << (pre_sum[n-1] - pre_sum[r-1]) << "  " << sum << endl;
        if(sum & 1 ^ 1 == 1) {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
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
        //cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}