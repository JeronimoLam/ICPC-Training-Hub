//B. Coin Games https://codeforces.com/problemset/problem/1972/B
#include <bits/stdc++.h> // include all libraries
using namespace std;


int t; //Numeber of Test Cases
int n[100]; //Number of Coins
char s[100][100];
int res[100];

//Razonamiento de TOMY:
/*
    Tenes que ver la congruencia modulo 2 de la cantidad de monedas boca arriba que hay al comienzo
    y en base a eso, ver quien va a ganar.
    ¿Qué es la congruencia modulo 2? Es el resto de la cantidad con 2. 
    SIEMPRE EL MOD2 se le resta 1 en cada movimiento. 1->0 0->1
    Si en tu ultimo mov el MOD es 1
    
    si n[i] MOD 2 = 0 -> 0
    sino              -> 1

    cantU MOD 2 = 0 --> B else A
*/

int main(){
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d\n", &n[i]);
        for (int j = 0; j < n[i]; j++){
            scanf("%c", &s[i][j]);
        }
    }
    for (int i = 0; i < t; i++)
    {
        int cantU = 0;
        for (int j = 0; j < n[i]; j++){
            if (s[i][j] == 'U') ++cantU;
        }
        res[i] = cantU % 2;
    }
    for (int i = 0; i < t; i++)
    {
        if (res[i]){
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
    return 0;
}