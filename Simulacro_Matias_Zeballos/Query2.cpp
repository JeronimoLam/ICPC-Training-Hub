#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);

const int LOG = 20; //2^20 > 10^6
const ll INF = 1e18;

int main(){
    FIN
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    
    vector<vector<ll>> sparse(LOG,vector<ll>(n));
    //Matrix con vectores y tamaños fijos
    for (int i = 0; i < LOG; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==0){
                sparse[i][j] = v[j];
            }
            else{
                ll val = INF;
                if ((j + (1 << (i-1))) < n) val = sparse[i-1][(j + (1 << (i-1)))]; 
                sparse[i][j] = min(sparse[i-1][j],val);
            }
        }
        
    }
    

    while (q--){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        ll ans = INF;
        for (int i = LOG-1; i >= 0; i--){
            if ((a + (1 << i)) <= b+1) {
                ans = min(ans, sparse[i][a]);
                a += (1 << i);
            }
        }
        cout << ans << "\n";
    }

    return 0;
}