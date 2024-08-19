#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n;
    cin >> n;
    while (n--){
        string palabra;
        cin >> palabra;
        if (palabra.length() > 10){
            cout << palabra[0] + to_string(palabra.length()-2) + palabra[palabra.length() - 1] << '\n';
        }
        else   
            cout << palabra << '\n';
    }
    return 0;
}