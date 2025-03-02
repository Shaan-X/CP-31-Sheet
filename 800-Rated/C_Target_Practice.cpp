#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int ans = 0;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            char x; cin >> x;
            if(x == 'X'){
                if(i == 10 || j == 1 || j == 10 || i == 1) ans++;
                if(((i == 2 || i == 9) && j != 1 && j != 10) || ((j == 2 || j == 9) && i!=1 && i!= 10)) ans += 2;
                if(((i == 3 || i == 8) && j>=3 && j<=8) || (j==3 || j == 8) && i>=3 && i<=8) ans += 3;
                if(((i == 4 || i==7) && j >= 4 && j <= 7) || ((j==4 || j==7) && i>=4 && i<=7)) ans += 4;
                if(( i == 5 || i ==6) && (j == 5 || j == 6)) ans += 5;
            } 
        }
    }
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
        int ans = solve();
        cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}