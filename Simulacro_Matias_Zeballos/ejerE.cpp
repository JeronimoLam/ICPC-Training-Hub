#include <bits/stdc++.h>
using namespace std;


int t;
unsigned long n[1000],k[1000];
unsigned long res[1000];

int main(){
    scanf("%d", &t);

    for (int i = 0; i < t; i++){
        scanf("%lu %lu", &n[i], &k[i]);
    }

    for (int i = 0; i < t; i++){
        if (k[i] < n[i]) res[i] = k[i];
        else{
            unsigned long cociente = k[i] / n[i];
            while (((k[i] + cociente )/n[i]) != cociente)
                cociente = (k[i] + cociente )/n[i];
            res[i] = k[i] + cociente;

        }
    }



    

    for (int j = 0; j < t; j++){
        printf("%lu\n", res[j]);
    }

    return 0;
}