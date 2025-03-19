#include <bits/stdc++.h>
#define ll long long
const double PI = 3.14159265358979323846;
#define digits(n) floor(log10(n) + 1);
const ll MOD = 1e9 + 7;
template<typename T>T gcd(T x, T y){if(y==0)return x;else return gcd(y,x%y);}
#define loop(i, a, n) for (int i = a; i < n; i++)
using namespace std;

int solve(){
    int n; cin >> n;
    vector<int> arr(n);
    loop(i , 0, n) cin >> arr[i];

    /* int greats = 0;
    bool notgood = false;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] > arr[i+1]){
            greats++;
        }
        if(arr[i] == 0 && i > 0) notgood = true;
    }
    if((greats == n - 1 || notgood) && n != 1) return -1; */

    int ans = 0;
    bool found = true;
    while(found){
        found = false;
        for(int i = 0; i < n - 1; i++){
            if(arr[i] >= arr[i+1]){
                arr[i] = arr[i] / 2;
                ans++;
                found = true;
            }
            if(arr[i] == 0 && i > 0) return -1;
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