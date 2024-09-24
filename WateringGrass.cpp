#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int n, largo, resp, contador;
double ancho, cubri, radio, pos, parcial;

struct node{
    double xi, xf;
}a[10005];

bool comparar(node a, node b){
    return a.xi < b.xi;
}

int main(){
    while(cin >> n >> largo >> ancho){
        contador = 0;
        double anchodiv2 = ancho/2;
        for(int i = 1; i <= n; i++){
            cin >> pos >> radio;
            if(radio <= anchodiv2){
                continue;
            }
            contador++;
            double aux = sqrt(radio * radio - anchodiv2 * anchodiv2);
            a[contador].xi = pos - aux;
            a[contador].xf = pos + aux;
        }
        sort(a + 1, a + contador + 1, comparar);
        int i = 1, resp = 0;
        cubri = 0.0;
        parcial = 0.1;
        while(cubri < largo && parcial != cubri){
            resp ++;
            parcial = cubri;
            for(i; a[i].xi <= parcial && i <= contador; i++){
                cubri = max(cubri, a[i].xf);
            }
        }
        if(cubri < largo){
            cout << "-1" << endl;
        }else{
            cout << resp << endl;
        }
    }
    return 0;
}