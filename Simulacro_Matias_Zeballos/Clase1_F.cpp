#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n,k;
    cin >> n >> k;
    vector<int> scores(n, 0);

    for (int i = 0; i < n; i++){
        cin >> scores[i];
    } 
    int res = 0;
    for (int i = 0; i < n; i++){
        if (scores[i] == 0) continue;
        if (scores[i] >= scores[k-1])
            res++;
        else
            break;
    }
    cout << res << '\n';
    return 0;
}