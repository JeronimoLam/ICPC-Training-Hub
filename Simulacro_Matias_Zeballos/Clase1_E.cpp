#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n;
    int res = 0;
    cin >> n;
    while (n--){
        string statement;
        cin >> statement;
        bool suma = false;
        for (int i = 0 ; i < 3; i++){
            if (statement[i] == '+'){
                suma = true;
                break;
            }
        }
        if (suma) res++; else res--;
    }
    cout << res << '\n';
    return 0;
}