#include <stdio.h>
 
int main() {
 
    int n_entradas, jogador_1, jogador_2, jogador_3;
    
    scanf("%d", &n_entradas);
    
    for(int i = 0; i < n_entradas; i++){
        scanf("%d %d %d", &jogador_1, &jogador_2, &jogador_3);
        if(jogador_1 == 0 && jogador_2 == 0 && jogador_3 == 0) printf("0\n");
        if(jogador_1 == 1 && jogador_2 == 1 && jogador_3 == 1) printf("0\n");
        if(jogador_1 == 0 && jogador_2 == 1 && jogador_3 == 1) printf("1\n");
        if(jogador_1 == 1 && jogador_2 == 0 && jogador_3 == 1) printf("2\n");
        if(jogador_1 == 1 && jogador_2 == 1 && jogador_3 == 0) printf("3\n");
        if(jogador_1 == 1 && jogador_2 == 0 && jogador_3 == 0) printf("1\n");
        if(jogador_1 == 0 && jogador_2 == 1 && jogador_3 == 0) printf("2\n");
        if(jogador_1 == 0 && jogador_2 == 0 && jogador_3 == 1) printf("3\n");
    }
 
    return 0;
}