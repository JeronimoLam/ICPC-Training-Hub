#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);

bool esVocal (char c){
    return (c == 'Y' or c == 'A' or c=='E' or c=='I' or c=='O' or c=='U');
}

int main(){
    FIN
    string original;
    string resultado;
    cin >> original;
    for (int i = 0; i < original.length(); i++)
    {
        if (esVocal(toupper(original[i]))) continue;
        resultado += '.';
        resultado += tolower(original[i]);
    }
    
    cout << resultado << '\n';
    return 0;
}