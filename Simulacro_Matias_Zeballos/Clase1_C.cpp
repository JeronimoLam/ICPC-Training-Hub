#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n;
    cin >> n;
    int total = 0;
    while (n--){
        int temp = 0;
        int res = 0;
        for (int i = 0; i < 3; i++)
        {
            
            cin >> temp;
            res+=temp;
        }

        if (res>1) total++;
    }
    cout << total << '\n';
    return 0;
}