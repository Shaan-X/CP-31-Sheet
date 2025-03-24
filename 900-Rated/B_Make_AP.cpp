#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

bool solve(){
    int a, b, c; cin >> a >> b >> c;
    //cout << (ceil(7.00) == 7) << endl;
    // cout << ceil(7.01) << endl;
    bool ans = false;

    int one = (b + abs (c - b)) / a;
   // if((a * one - b) == (b - c)) ans = true;
    if((b - a * one) == (c - b)) ans = true;
   // if((a * one - b) == (c - b)) ans = true;
   // if((b - a * one) == (b - c)) ans = true;

    //double ONE = (double)(b + abs (c - b)) / a * 1.0;

     int two = (a + c) / (2 * b);
    if((b * two - a) == (c - b * two)) ans = true;
    //double TWO = (double)(a + c) / 2.0 * b;

    int three = (abs(b - a) + b) / c;
    if((c * three - b) == (b - a)) ans = true; 
    //double THREE = (double)(abs(b - a) + b) / c * 1.0;

       // cout << one << " " << two << " " << three << endl;

   
    //if(one == ceil(ONE)) ans = true;
    //if(two == ceil(TWO)) ans = true;
    //if(three == ceil(THREE)) ans = true;

    return ans;
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
        bool ans = solve();
       // cout << ans << endl;
        cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}