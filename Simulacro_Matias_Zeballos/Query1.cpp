#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n, q;
    cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    vector<ll> prefix(n+1,0);
    for (int i = 0; i < n; i++){
        prefix[i+1] = prefix[i] + v[i];
    }
    while (q--){
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        cout << prefix[b+1] - prefix[a] << "\n";
    }

    return 0;
}