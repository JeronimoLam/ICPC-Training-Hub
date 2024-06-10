#include <bits/stdc++.h>

using namespace std;

const int MOD = 1e9+7;

typedef long long ll;

#define FIN ios::sync_with_stdio(0);cout.tie(0);cin.tie(0)

ll solve(int pos, vector <ll> &dp){
	if(pos < 0) return 0;
	if(dp[pos] != -1) return dp[pos];

	dp[pos] = 0;
	for(int i = 1; i <= 6; i++){
		dp[pos] += solve(pos-i,dp);
		dp[pos] %= MOD;
	}
	return dp[pos];

}

int main(){
	FIN;
	
	int n; cin >> n;
	vector <ll> dp(n+1,-1);
	dp[0] = 1;
	
	solve(n,dp);
	
	cout << dp[n] << "\n";
	
}
