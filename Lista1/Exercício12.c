#include <stdio.h>

int main() {

    float vetor[5], maior, menor, soma = 0, media;
    int i;

    for(i = 0; i < 5; i++){
    	printf("Digite um valor: ");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }

    maior = vetor[0];
    menor = vetor[0];

    for(i = 1; i < 5; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
        }

        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }

    media = soma / 5;

    printf("Valores:\n");
    for(i = 0; i < 5; i++){
        printf("%.2f\n", vetor[i]);
    }

    printf("Maior: %.2f\n", maior);
    printf("Menor: %.2f\n", menor);
    printf("Media: %.2f\n", media);

    return 0;
    
}
