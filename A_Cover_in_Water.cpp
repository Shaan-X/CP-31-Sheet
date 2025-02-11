#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    //if 3 consec cells empty then ans = 2 else ans = number of non-blocked cells
    int n; cin >> n;
    string s; cin >> s;
    bool cons = false;
    int cell = 0;
    for(int i = 1; i < n - 1; i++){
        if(s[i] == '.') cell++;
        if(s[i] == '.' && s[i-1] == '.' && s[i+1] == '.') cons = true;
    }
    if(s[0] == '.') cell++;
    if(s[n-1] == '.') cell++;

    if(cons) return 2;
    return cell;
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