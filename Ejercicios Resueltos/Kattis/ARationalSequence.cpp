//A Rational Sequence (Take 3)
#include <bits/stdc++.h> // include all libraries
using namespace std;

#define INF 1e9;



int P, pos=0;
int K[1000], N[1000], res[1000][2];
int aux[32];
void search(int num){
    while (num > 0)
    {
        aux[pos++] = num % 2;
        num /= 2;
    }
}

void imprimirAux(){
    for (int i = 0 ; i < 32; ++i){
        printf("[%d]", aux[i]);
    }
    printf("\n");
}

void calculo(int x){
    int p=1,q = 1;
   
    for (int i = (pos-2); i >= 0; --i){
       if (aux[i]==0){
            q+=p;
       }
       else{
            p+=q;
       }
    }
    res[x][0] = p;
    res[x][1] = q;
   
}

int main(){
    
    scanf("%d", &P);
    for (int i = 0; i < P; ++i)
        scanf("%d %d", &K[i], &N[i]);
    for (int i = 0; i < P; ++i){
        pos = 0;
        memset(aux, 0, sizeof aux);
        search(N[i]);
        //imprimirAux();
        calculo(i);

    }
    for (int i = 0; i < P; ++i)
        printf("%d %d/%d\n", K[i], res[i][0], res[i][1]);
    return 0;
}// DP to solve min weighted perfect matching on small general graph