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
    loop(i, 0, n) cin >> arr[i];
   // if(arr[0] % 2 == 1) arr[0]++;
    for(int i = 0; i < n - 1; i++){
         if(arr[i] != 1){
            if(i % 2 == 0){
                if(arr[i] % 2 == 1) arr[i]++;
               // if(arr[i+1] % arr[i] == 0) arr[i+1]--;
            }
            else{
                if(arr[i] % 2 == 0) arr[i]++;
                //if(arr[i+1] % arr[i] == 0) arr[i+1]--;
            }
        }
        /* else{
            if(i % 2 == 1){
                arr[i] = 3;
                if(arr[i+1] == 5) arr[i+1]--;
            }
            else{
                arr[i]++;
            }
        }  */
    //cout << arr[i] << " ";
      
    }
    //cout << endl;
    if(arr[n-1] % arr[n-2] == 0) arr[n-1]++; 
    loop(i, 0, n) cout << arr[i] << " ";
    cout << endl;
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
     //   cout << ans << endl;
        //cout << (ans ? "YES" : "NO") << endl;
    //cout << "Case #" << i << ": " <<   << endl;
    }
    return 0;
}