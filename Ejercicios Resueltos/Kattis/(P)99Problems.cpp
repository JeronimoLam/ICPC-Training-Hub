//99 Problems, pasó hasta el grupo 2 de los secret
#include <bits/stdc++.h> // include all libraries
using namespace std;


int N, Q;

int dimOPC = 0;

int V[10000];
int OPC[10000][2];
int P[10000][2];
int R[10000];

void cargarOPC(){
    int i = 0;
    int cant;
    int act = 0;
    while (i < N){
        act = V[i];
        cant = 0;
        while ((i < N) && (act == V[i])){++cant; ++i;};
        OPC[dimOPC][0] = act;
        OPC[dimOPC++][1] = cant;
    }
    //Hago un arreglo acumulador de ocurrencias por cada valor
}

int search1(int D){
    for (int j = 0; j<dimOPC; ++j)
        if (OPC[j][0] > D)
            if (OPC[j][1]-- > 0) return j;
            else return -1;
    return -1;
}
int search2(int D){
    for (int j = dimOPC-1; j>=0; --j)
        if (OPC[j][0] <= D) 
            if (OPC[j][1]-- > 0) return j;
            else return -1;
    return -1;
}



int main(){
    
    scanf("%d %d", &N, &Q);
    for (int i = 0; i < N; ++i)
        scanf("%d", &V[i]);
    for (int i = 0; i < Q; ++i){
        scanf("%d %d", &P[i][0], &P[i][1]);
    }
    sort(V, V+N);
    cargarOPC();
    for (int i = 0; i < Q; ++i){
        int a = P[i][0] == 1? search1(P[i][1]) : search2(P[i][1]);
        if (a!= -1){
            R[i] = OPC[a][0];
        }
        else
            R[i] = -1;
    }
    for (int i = 0; i < Q; ++i){
        printf("%d\n", R[i]);
    }
    
    return 0;
}// DP to solve min weighted perfect matching on small general graph