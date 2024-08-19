#include <bits/stdc++.h>
using namespace std;
int t;
long long n;
long a;

const int MOD = 1e9+7;
//CUIDADO tiene q ser ll la suma o por cada suma aplicar el mod

typedef long long ll;

#define FIN ios::sync_with_stdio(0);cout.tie();cin.tie(0)
//Optimiza el cin y el cout

int main(){
    //cin >> t;
    //while (t--){
        cin >> n;
        vector <ll> dp(n+1,0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; (j <= 6) && (j <= i) ; j++)
            {   
                dp[i]+=dp[i-j];
                dp[i] %= MOD;
            }
        }
        
        cout << dp[n] << '\n';
    //}
    return 0;
}