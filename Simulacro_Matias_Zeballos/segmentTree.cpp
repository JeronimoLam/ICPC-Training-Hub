#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIN ios::sync_with_stdio();cout.tie(0);cin.tie(0);

#ifdef LOCAL
const int MAXN = 8;
#else
const int MAXN = 1<<20;
#endif

vector<ll> tree(2*MAXN+5, 0);

ll op(ll x, ll y){
    return min(x,y);
}

void build(vector<ll> &v, int node = 1, int l = 0, int r = MAXN-1){
    if (l==r)
    {
        tree[node] = v[l];
        return;
    }
    else{
        int mid = (l+r)/2;
        build(v, node * 2, l, mid);
        build(v, node*2+1, mid+1, r);
        tree[node] = op(tree[2*node], tree[2*node+1]);
    }
}

void update(int k, ll u, int pos = 1, int l = 0 , int r = MAXN-1){
    if (l == r){
        tree[pos] = u;
        return;
    }
    int mid = (l+r) /2;
    if (k >= l and k <= mid){
        update(k, u, pos*2, l, mid);
    }
    else
        update(k, u, pos*2+1, mid+1, r);
    tree[pos] = op(tree[pos*2], tree[pos*2+1]);
}
const long NEUT = 1<<60;
ll query(int a, int b, int pos = 1, int l = 0, int r = MAXN-1){
    if (l >= a and r <= b){
        return tree[pos];
    }
    else if (l > b or r < a ){
        return NEUT;
    }
    
    int mid = (l+r) / 2;
    return op(query(a,b, pos*2, l, mid),query(a,b, pos*2+ 1, mid+1, r));
}

int main(){
    FIN
    int n, q;
    cin >> n >> q;
    vector<ll> valores(MAXN,0);
    for (int i = 0; i < n; i++)
    {
        cin >> valores[i];
    }
    build(valores);
    while (q--)
    {
        int op; cin >> op;
        if (op == 1){
            //Update k u
            int k; ll u;
            cin >> k >> u; k--;
            update(k,u);
        }
        else {
            int a,b;
            cin >> a >> b; a--; b--;
            cout << query(a,b) << "\n";
            //  query [a,b]
        }
    }
    

    return 0;
}