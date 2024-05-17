//E. Find the Car https://codeforces.com/problemset/problem/1971/E
#include <bits/stdc++.h> // include all libraries
using namespace std;


int t; //Numeber of Test Cases
int n[10000],k[200000],q[100000]; //n = final destination (first is 0)
                                                //k = number of stops (0 .. k)
long long a[200000]; long long b[200000]; long long d[200000];
                                                //a = index of stop (0..n) where a_n = k
                                                //b = time fo stop a_i (0.. 10e9)
long long res[100000];

int binarySearch(int inicio, int fin, int val){
    int medio = (inicio + fin) / 2;
    while (inicio <= fin){
        if (a[medio] == val)
            return medio;
        else
        if (a[medio] > val)
            fin = medio - 1;
        else
            inicio = medio + 1;
        medio = (inicio + fin) / 2;
    }
    if (a[medio] > val) return medio -1;
    return medio;
}

int main(){
    scanf("%d\n", &t);
    
    for (int i = 0, inicio = 0, inicioQ = 0; i < t; inicio += (k[i]+1), inicioQ += q[i], i++)
    {
        scanf("%d %d %d\n", &n[i],&k[i],&q[i]);
        a[inicio] = 0;
        b[inicio] = 0;
        for (int j = 0; j < k[i]; j++)
        {
            scanf("%d", &a[inicio+j+1]);
        }
        for (int j = 0; j < k[i]; j++)
        {
            scanf("%d", &b[inicio+j+1]);
        }
        for (int j = 0; j < q[i]; j++)
        {
            scanf("%d", &d[inicioQ+j]);
        }
    }
    
    for (int i = 0, inicio = 0, incioQ = 0; i < t; inicio+=(1+k[i]), incioQ += q[i],i++)
    {
        for (int j = 0; j < q[i]; j++)
        {
            int pos = binarySearch(inicio, inicio+k[i], d[incioQ+j]);
            if (a[pos] == d[incioQ+j]) res[incioQ+j] = b[pos];
            else res[incioQ+j] =floorl(b[pos] + (((double)b[pos + 1] - b[pos]) / (a[pos+1] - a[pos])) * (d[incioQ+j] - a[pos]));
        }
    }
    
    for (int i = 0, inicio = 0; i < t; inicio+=q[i], i++)
    {
        for (int j = 0; j < q[i]; j++)
        {
            printf("%d ", res[inicio+j]);
        }
        printf("\n");
    }
    return 0;
}