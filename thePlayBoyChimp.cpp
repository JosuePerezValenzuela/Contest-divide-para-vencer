#include <stdio.h>
int main(){
    int N, Q, peso, i, j;
    bool bandera;
    scanf("%d", &N);
    int list[50001] = {0};
    for(int i = 1; i <= N; i++) scanf("%d", &list[i]);
    scanf("%d", &Q);
    for(i = 0; i < Q; i++){
        scanf("%d", &peso);
        bandera = false;
        for(j = 1; j <= N; j++){
                if(list[j] >= peso){
                    if(list[j-1] > 0){
                        printf("%d ", list[j-1]);
                    }
                    else{
                        printf("X ");
                    }
                    while (list[j] == peso){
                        ++j;
                    }
                    if(list[j] > peso){
                        printf("%d\n", list[j]);
                    }
                    else if(list[j+1] > 0){
                        printf("%d\n", list[j+1]);
                    }
                    else{
                        printf("X\n");
                    }
                    bandera = true;
                    break;
                }
        }
        if(bandera == false){
            printf("%d X\n", list[N]);
        }
    }
    return 0;
}