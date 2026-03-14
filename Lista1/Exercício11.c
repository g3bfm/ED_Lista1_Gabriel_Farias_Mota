#include <stdio.h>

int main() {

    float vetor[10], soma = 0;
    int negativos = 0, i;

    for(i = 0; i < 10; i++) {
    	printf("Digite um numero: ");
        scanf("%f", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        if(vetor[i] < 0) {
            negativos++;
        } else {
            soma += vetor[i];
        }
    }
    
    printf("Negativos: %d\n", negativos);
    printf("Soma dos positivos: %.2f\n", soma);

    return 0;
    
}
