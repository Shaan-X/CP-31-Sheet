#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    ll n; cin >> n;
    //if n is a power of 2, it'll only be divisible by 2 and no.s like 4, 8 ... never any odd no. involved so ans is NO
    //else yes
    //prime factorization shud only contain 2 then NO else YES

    while(n % 2 == 0) //remove powers of 2
        n /= 2;
    //say n = 4, 4->2->1

    if(n > 1) return 1;//some odd prime we had for sure that's why n didn't reduce to 1
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
        cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}