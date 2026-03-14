#include <stdio.h>

int main(){

    int vetor[6], i, soma = 0, impares = 0;

    for(i = 1; i < 7; i++){
    	printf("Digite %d numeros inteiros: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Pares:\n");
    for(i = 1; i < 7; i++){
        if(vetor[i] % 2 == 0){
            printf("%d\n", vetor[i]);
            soma += vetor[i];
        }
    }

    printf("Impares:\n");
    for(i = 1; i < 7; i++){
        if(vetor[i] % 2 != 0){
            printf("%d\n", vetor[i]);
            impares++;
        }
    }

    printf("\nSoma dos pares: %d\n", soma);
    printf("\nQuantidade de impares: %d\n", impares);

    return 0;
    
}
