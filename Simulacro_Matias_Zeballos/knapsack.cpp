#include <bits/stdc++.h>
using namespace std;
int t;

long a;

const int MOD = 1e9+7;
//CUIDADO tiene q ser ll la suma o por cada suma aplicar el mod

typedef long long ll;
ll n;
ll w;

#define FIN ios::sync_with_stdio(0);cout.tie();cin.tie(0)
//Optimiza el cin y el cout

struct item{
    int w,v;
};

int main(){
    //cin >> t;
    //while (t--){
        cin >> n >> w;
        vector <item> elem(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> elem[i].w >> elem[i].v;
        }
         
        vector <ll> dp(w+1,-1);
        
        dp[0] = 0;

        for (ll i = 0; i < n; i++)
        {
            auto [peso, valor] = elem[i];
            for (ll j = w; j >= peso; j--)
            {
                if (dp[j-peso] != -1){
                    dp[j] = max(dp[j], dp[j-peso] + valor);
                }
            }
        }
        
        
        cout << *max_element(dp.begin(), dp.end()) << '\n';
    //}
    return 0;
}