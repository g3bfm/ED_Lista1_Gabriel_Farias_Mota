#include <stdio.h>

int main() {

    float notas[15], soma = 0, media;
    int i;
     
    for(i = 0; i < 15; i++){
    	printf("Digite as notas: ");
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
        
    }
    
    media = soma / 15;

    printf("Media: %.2f\n", media);

    return 0;
    
}
