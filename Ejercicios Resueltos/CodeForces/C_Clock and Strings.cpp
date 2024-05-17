//C. Clock and Strings https://codeforces.com/problemset/problem/1971/C
#include <bits/stdc++.h> // include all libraries
using namespace std;


int t; //Numeber of Test Cases
int n[5940][4]; //dots in clocl
int res[5940];

#define _a n[i][0]
#define _b n[i][1]
#define _c n[i][2]
#define _d n[i][3]
//Razonamiento de TOMY:
/*

*/

int main(){
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < 4; j++){
            scanf("%d", &n[i][j]);
        }
    }
    for (int i = 0; i < t; i++)
    {
        /*int cant = 0;
        if (_a > _b){
            for (int j = _b; j < _a ; j++)
                if ((_c == j) || (_d == j))++cant;
        }
        else
            for (int j = _a; j < _b ; j++)
                if ((_c == j) || (_d == j))++cant;*/
        int check = 0;
        if (_b > _a){
            check = ((_d > _a) && (_d < _b) ? 1 : 0);
            check += ((_c > _a) && (_c < _b) ? 1 : 0);
        }
        else
        {
            check = ((_d > _b) && (_d < _a) ? 1 : 0);
            check += ((_c > _b) && (_c < _a) ? 1 : 0);
        }
        res[i] = check % 2;
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