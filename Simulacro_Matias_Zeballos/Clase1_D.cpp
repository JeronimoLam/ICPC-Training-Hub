#include <bits/stdc++.h>
using namespace std;
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);


int main(){
    FIN
    long long n, m ,a;
    cin >> n >> m >> a;
    long long n1=(n % a == 0) ? n/a : n/a + 1;
    long long n2=(m % a == 0) ? m/a : m/a + 1;
    cout << n1 * n2 << '\n';
    return 0;
}