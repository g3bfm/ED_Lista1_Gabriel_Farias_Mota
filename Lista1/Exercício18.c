#include <stdio.h>

int main(){

    int vetor[15], i, j, n = 15;
    
    for(i = 0; i < 15; i++){
    	printf("Digite um valor para o vetor: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < n; i++){

        if(vetor[i] == 0){

            for(j = i; j < n - 1; j++){
                vetor[j] = vetor[j + 1];
            }

            n--;
            i--;
        }
    }

    printf("\nVetor compactado:\n");
    for(i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
    
}
