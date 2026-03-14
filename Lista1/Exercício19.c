#include <stdio.h>

int main(){

    int vetor[10], i, j, repetido;

    for(i = 0; i < 10; i++){
		printf("Digite um numero: ");
        scanf("%d", &vetor[i]);

        for(j = 0; j < i; j++){

            if(vetor[i] == vetor[j]){
                repetido = 1;
            }
        }

        while(repetido == 1){

            repetido = 0;
            printf("Numero repetido, digite novamente: ");
            scanf("%d", &vetor[i]);

            for(j = 0; j < i; j++){
                if(vetor[i] == vetor[j]){
                    repetido = 1;
                }
            }
        }
    }

    printf("\nVetor final:\n");

    for(i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
    
}
