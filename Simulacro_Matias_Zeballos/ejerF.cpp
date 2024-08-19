#include <bits/stdc++.h>
using namespace std;


int t;

int n[1000];



int main(){
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < t; i++){
        int cantNoCero = 0;
        int cantDig = 0;
        int num = n[i];
        while (num != 0){
            int dig = num % 10;
            if (dig == 0 ) 
            cantDig++;
            num /= 10;
        }
    }
    for (int i = 0; i < t; i++){
        
    }

    return 0;
}