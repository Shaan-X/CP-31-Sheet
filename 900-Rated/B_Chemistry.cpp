#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

bool nonZeroCompare(int a, int b) {
    if (a == 0) return false;
    if (b == 0) return true;
    return a < b;
}
int solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
   
    vector<int> freq(26, 0); 
    for(int i = 0; i < n; i++){
        freq[s[i] - 'a']++;
    } 

    if(n - k == 1 || n == 1) return 1;
    while(k > 0){
        const auto& ind = min_element(freq.begin(), freq.end(), nonZeroCompare);
        if(*ind - k < 0) { k -= *ind; *ind = 0; }
        else { *ind -= k; k = 0; }
    }
    int odd = 0, even = 0, size = 0, diff = 0;
    for(auto a : freq){
        if(a > 0){
            diff++;
            size += a;
            if(a % 2 == 0) even++;
            else odd++;
        } 
    }
    
    if(size == 1) return 1;
    if(size == 3){
        if((diff == 2) || (diff == 1)) return 1;
        return 0;
    }
    if((even == diff) || (even + odd == diff && odd == 1)) return 1;
    return 0;
}



int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int test;
    cin >> test;
    for(int i = 1; i <= test; i++)
    {
        int ans = solve();
       // cout << ans << endl;
       cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}