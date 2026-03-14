#include <stdio.h>

int main() {

    int vetor1[10], vetor2[10], intersecao[10], i, j, k = 0, existe;

    for(i = 0; i < 10; i++) {
    	printf("Digite um numero: ");
        scanf("%d", &vetor1[i]);
    }

    for(i = 0; i < 10; i++) {
    	printf("Digite um numero: ");
        scanf("%d", &vetor2[i]);
    }
    
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {

            if(vetor1[i] == vetor2[j]) {

                existe = 0;

                for(int p = 0; p < k; p++) {
                    if(intersecao[p] == vetor1[i]) {
                        existe = 1;
                    }
                }

                if(existe == 0) {
                    intersecao[k] = vetor1[i];
                    k++;
                }

            }

        }
    }

    printf("Intersecao:\n");
    for(i = 0; i < k; i++) {
        printf("%d\n", intersecao[i]);
    }

    return 0;
    
}
