#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n;
    cin >> n;
    int pos = -1;
    int even = 0;
    int a;
    cin >> a;
    if (a % 2 == 0) even = 0; else even = 1;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a % 2 != even) pos = i+1;
    }
    
    cout << pos << '\n';
    return 0;
}