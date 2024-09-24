#include <cstdio>
#include <algorithm>
using namespace std;
struct soldado{
    int B, J;
}a[10001];
bool comp(soldado a, soldado b){
    return a.J > b.J;
}
int main(){
    int N, caso = 1;
    while(scanf("%d", &N) && N != 0){
        for(int i = 0; i < N; i++) scanf("%d%d", &a[i].B, &a[i].J);
        sort(a, a+N, comp);
        int tiempo = 0;
        int resp = 0;
        for(int i = 0; i < N; i++){
            tiempo = tiempo + a[i].B;
            resp = max(resp, tiempo + a[i].J);
        }
        printf("Case %d: ", caso++);
        printf("%d\n", resp);
    }
    return 0;
}