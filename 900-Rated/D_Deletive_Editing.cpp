#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    string s, f;
    cin >> s >> f;
    vector<int> freq(26+1, 0);

    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'A' + 1]++;
    }

    for(int i = 0; i < f.length(); i++){ 
        freq[f[i] - 'A' + 1]--;
    }

    for(int i = 1; i <= 26; i++){
        while(freq[i] >= 1){
            //delete their first ocurences from s one by one
            freq[i]--;
            int ind = s.find('A' + i-1);
            if(ind != string::npos) s[ind] = '0'; 
            else break;
        }
    }

    string res = "";
    for(int i = 0; i < s.length(); i++){
        if(s[i] != '0') res += s[i];
    }
    
    if (res == f) return 1;
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