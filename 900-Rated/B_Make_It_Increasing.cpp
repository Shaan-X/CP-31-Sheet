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

    //start from the back say a[n-1] > a[n] --> reduce a[n-1] now a[n-1] < a[n]
    //now say a[n-2] > a[n-1] < a[n]
    //here just reducing a[n-2] will work & it will not affect the array as the resulting array will be
    // a[n-2] < a[n-1] < a[n] --> cuz a[n-1] was already < a[n]

    int ans = 0;

        for(int i = n - 2; i >= 0; i--){
            if(arr[i] >= arr[i+1]){
                //keep reducing till it becomes less than arr[i+1]
                while(arr[i] >= arr[i+1]){
                    arr[i] = arr[i] / 2;
                    ans++;
                    if(arr[i] == 0) break;
                }
            }
            if(arr[i] == 0 && arr[i + 1] == 0){
                ans = -1;
                break;
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