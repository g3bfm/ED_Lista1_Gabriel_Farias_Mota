#include <stdio.h>

int main(){

    int vetor1[10], vetor2[10], uniao[20], i, j, k = 0, existe;

    for(i = 0; i < 10; i++){
    	printf("Digite um numero: ");
        scanf("%d", &vetor1[i]);
    }
    
    for(i = 0; i < 10; i++){
    	printf("Digite um numero: ");
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 10; i++){

        existe = 0;

        for(j = 0; j < k; j++) {
            if(uniao[j] == vetor1[i]) {
                existe = 1;
            }
        }

        if(existe == 0) {
            uniao[k] = vetor1[i];
            k++;
        }
    }

    for(i = 0; i < 10; i++){

        existe = 0;

        for(j = 0; j < k; j++){
            if(uniao[j] == vetor2[i]){
                existe = 1;
            }
        }

        if(existe == 0){
            uniao[k] = vetor2[i];
            k++;
        }
    }

    printf("Uniao:\n");
    for(i = 0; i < k; i++){
        printf("%d\n", uniao[i]);
    }

    return 0;
}
