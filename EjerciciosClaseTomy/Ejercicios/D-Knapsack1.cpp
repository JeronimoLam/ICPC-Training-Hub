#include <bits/stdc++.h>

using namespace std;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)

struct item{
    int w,v;
};

typedef long long ll;

int main(){
	FIN;

    int n,w;
    cin >> n >> w;
    vector <item> v(n);

    for (int i = 0; i < n; i++){
        cin >> v[i].w >> v[i].v;
    }

    vector <ll> dp(w+1,-1);
    dp[0] = 0;

    for (int i =0; i< n; i++){
        auto [peso,valor] = v[i];
        for (int j = w; j >= 0; j--){
            if (j - peso < 0 or dp[j - peso] == -1) continue;
            dp[j] = max(dp[j],dp[j-peso] + valor);
        }
    }

	cout << *max_element(dp.begin(),dp.end()) << "\n";




	return 0;
}
