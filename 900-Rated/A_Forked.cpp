#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int a, b, xk, yk, xq, yq;
    cin >> a >> b >> xk >> yk >> xq >> yq;
    int ans = 0;

    set<pair<int, int>> x_set =  {{xk - a, yk - b},  {xk - b, yk - a}, 
                                  {xk - a, yk + b},  {xk - b, yk + a}, 
                                  {xk + a, yk - b},  {xk + b, yk - a}, 
                                  {xk + a, yk + b},  {xk + b, yk + a}};

    set<pair<int, int>> y_set =  {{xq - a, yq - b}, {xq - b, yq - a},
                                  {xq - a, yq + b}, {xq - b, yq + a}, 
                                  {xq + a, yq - b}, {xq + b, yq - a}, 
                                  {xq + a, yq + b}, {xq + b, yq + a}};

    vector<pair<int, int>> x(x_set.begin(), x_set.end());
    vector<pair<int, int>> y(y_set.begin(), y_set.end());

    for (const auto& p1 : x) {  // p1 is pair<int, int>
        for (const auto& p2 : y) {
            if (p1.first == p2.first && p1.second == p2.second) ans++;
        }
    }
    
    return ans;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
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