#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;
/* Learnt a lot from this */

int min_oper(string s, string check){
    int ans = 0;
    int ind_check = check.length() - 1; //1->0 //only 2 elements are there in check -- 00 || 25 || 75 || 50
    int len = s.length();
    for(int i = len - 1; i >= 0; i--){
        if(s[i] == check[ind_check]){
            ind_check--;
            if(ind_check < 0) break; //incase we don't get any match
        }
        else ans++;
    }

    if(ind_check >= 0) ans = INT_MAX; //if we don't get any match make sure u don't return zero
    return ans;
}

int solve(){
    string s; cin >> s; //taken int as string already --> Smart

    vector<string> test = {"00", "25", "75", "50"};
    int ans = INT_MAX;

    for(auto it : test){//first gives 00 to the function then 25 then 75
        ans = min(ans, min_oper(s, it));
    }

    cout << ans << endl;
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