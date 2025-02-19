#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve() {
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    string current = x;
    int operations = 0;

    bool match_found = true;
    while (match_found) {
        if (current.find(s) != string::npos) {
            return operations;
        }
            

        current += current;
        operations++;

    }

    if (current.find(s) != string::npos) {
        return operations;
    }

    return -1;
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