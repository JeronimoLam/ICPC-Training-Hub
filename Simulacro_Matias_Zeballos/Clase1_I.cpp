#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    int n,a,b,c;
    cin >> n >> a >> b >> c;

    vector<int> p(3,0);
    vector<int> pieces(n,0);
    pieces[0] = n;
    p[0]=a+b;
    p[1]=a+c;
    p[2]=b+c;
    
    bool continuar = true;
    int cantPieces = 1;
    
    while (continuar){
        continuar = false;
        for (int i = 0; i < cantPieces; i++){
            if (pieces[i] == p[0]){
                pieces[i] = a;
                pieces[cantPieces++] = b;
                continuar = true;
                continue;
            }
            if (pieces[i] == p[1]){
                pieces[i] = a;
                pieces[cantPieces++] = c;
                continuar = true;
                continue;
            }
            if (pieces[i] == p[2]){
                pieces[i] = b;
                pieces[cantPieces++] = c;
                continuar = true;
                continue;
            }
        }
    }
    
    cout << cantPieces << '\n';
    return 0;
}