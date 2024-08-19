#include <bits/stdc++.h>
using namespace std;


int t;

int n[100],m[100];

char grid[100][50][50];

int main(){
    scanf("%d", &t);
    
    for (int i = 0; i < t; i++){
        scanf("%d", &n[i]);
        scanf("%d\n", &m[i]);
        for (int f = 0; f < n[i]; f++){
            for (int c = 0; c < m[i]; c++){
                scanf("%c",&grid[i][f][c]);
            }   
            if ((i != t-1) || (f != n[i]-1)) scanf("\n");
        }
    }
    for (int i = 0; i < t; i++){
        for (int f = n[i]-2; f>=0; f--){
            for (int c = 0; c < m[i]; c++){
                if (grid[i][f][c] == '*'){
                    int dest = f+1;
                    while ((dest < n[i]) && (grid[i][dest][c] == '.'))
                        dest++;
                    dest = dest - 1;
                    if ((dest) != f){
                        grid[i][dest][c] = '*';
                        grid[i][f][c] = '.';
                    }
                }
            }   
        }
    }
    for (int i = 0; i < t; i++){
        for (int f = 0; f < n[i]; f++){
            for (int c = 0; c < m[i]; c++){
                printf("%c",grid[i][f][c]);
            }   
            printf("\n");
        }
    }

    return 0;
}