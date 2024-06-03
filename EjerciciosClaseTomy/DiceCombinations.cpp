#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

typedef long long ll;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)

int main(){
	FIN;
	
	int n; cin >> n;
	vector <ll> dp(n+1,0);
	dp[0] = 1;
	// DBG(n);
	
	for(int i = 1; i<= n;i++){
		for(int j = 1; j <= 6; j ++){
			if (i - j >= 0) dp[i] +=dp[i-j];
			dp[i] %= MOD;
		}
	}
	
	cout << dp[n] << "\n";
	
}
