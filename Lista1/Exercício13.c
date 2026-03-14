#include <stdio.h>

int main() {

    int vetor[5], maior, menor, pos_maior = 0, pos_menor = 0, i;

    for(i = 0; i < 5; i++){
    	printf("Digite %d numeros: ", i);
        scanf("%d", &vetor[i]);

        if(i == 0){
            maior = vetor[i];
            menor = vetor[i];
        }

        if(vetor[i] > maior){
            maior = vetor[i];
            pos_maior = i;
        }

        if(vetor[i] < menor){
            menor = vetor[i];
            pos_menor = i;
        }
    }

    printf("Posicao do maior: %d\n", pos_maior);
    printf("Posicao do menor: %d\n", pos_menor);

    return 0;
    
}
