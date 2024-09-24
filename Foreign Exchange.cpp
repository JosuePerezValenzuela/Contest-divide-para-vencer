#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int a[500001];
int b[500001];
int n, origen, destino, i, j;
bool posible;

int main(){
    while(cin >> n && n){
        posible = true;
        i = 1;
        j = 1;
        memset(a, 0, 500001);
        memset(b, 0, 500001);
        for(i; i <= n; i++){
            cin >> origen >> destino;
            a[origen]++;
            b[destino]++;
        }
        while(posible && j <= 500000){
            if(a[j] != b[j]){
                posible = false;
            }
            j++;
        }
        if(posible == true) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}