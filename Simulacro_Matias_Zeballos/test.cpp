#include <bits/stdc++.h>
using namespace std;


int t,n[100];

char g[100][2][100];
int res[100];

int sonIguales(char a, char b){
    if (a == b) return 1;
    else
        if (((a == 'B') || (a == 'G')) && ((b == 'B') || (b == 'G')))
            return 1;
        else return 0;
}

int main(){
    scanf("%d", &t);
    

    for (int j= 0; j < t; j++){
        scanf("%d\n", &n[j]);
        for (int i = 0; i < n[j]; i++){
            scanf("%c",&g[j][0][i]);
            scanf("\n");
        }
        for (int i = 0; i < n[j]; i++){
            scanf("%c",&g[j][1][i]);
        }
        }

    for (int i= 0; i < t; i++){
        int exito = 1;
        for (int j = 0; (j < n[i]) && (exito); j++){
            if (!sonIguales(g[i][0][j],g[i][1][j]))
                exito = 0;
        }
        res[i] = exito;
    }

    for (int j = 0; j < t; j++){
        if (res[j]==1)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}