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
vector <ll> dp(10e6, 0); 

ll dfs (int n ){
    if (dp[n] != 0) return dp[n];
    else { ll aux = 0;
    for (int j = 1; (j <= 6) && (j <= n) ; j++)
        {   
            aux += dfs(n-j);
            aux %= MOD;
        }
    dp[n] = aux;
    return aux;
    }
}

int main(){
    //cin >> t;
    //while (t--){
        cin >> n;
        dp[0] = 1;
        
        cout << dfs(n) << '\n';
    //}
    return 0;
}