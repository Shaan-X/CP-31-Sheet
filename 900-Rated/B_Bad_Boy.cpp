#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int r, c, i, j; cin >> r >> c >> i >> j;
    if(r == 1 && c == 1) cout << 1 << " " << 1 << " " << 1 << " " << 1 << endl;
    else if(c == 1){
        if(i != 1 && i != r)  cout << 1 << " " << 1 << " " << r << " " << 1 << endl;
        else if(i == 1) cout << r << " " << 1 << " " << r-1 << " " << 1 << endl;
        else if(i == r) cout << 1 << " " << 1 << " " << 2 << " " << 1 << endl;
    }
    else if(r == 1){
        if(j != 1 && j != r) cout << 1 << " " << 1 << " " << 1 << " " << c << endl;
        else if(j == 1) cout << 1 << " " << c << " " << 1 << " " << c-1 << endl;
        else if(i == r) cout << 1 << " " << 1 << " " << 1 << " " << 2 << endl;
    }
    else if(i == 1){
        cout << r << " " << 1 << " " << r << " " << c << endl;
    }
    else if(j == 1){
        cout << 1  << " " << 1 << " " << r  << " " << c << endl;
    }
    else if(i == r){
        cout << 1  << " " << 1 << " " << r << " " << c << endl;
    }
    else if(j == c){
        cout << 1  << " " << 1 << " " << r << " " << 1 << endl;
    }
    else{     
        cout << 1 << " " << 1 << " " << r << " " << c << endl;
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