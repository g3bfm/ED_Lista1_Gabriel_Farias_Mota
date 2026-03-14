#include <stdio.h>

int main(){

    int a[5], y[5], i, j, existe;
    
    for(i = 0; i < 5; i++){
    	printf("Digite um valor para o vetor 1: ");
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++){
    	printf("Digite um valor para o vetor 2: ");
        scanf("%d", &y[i]);
    }

    printf("\nSoma:\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", a[i] + y[i]);
    }
    
    printf("\nProduto:\n");
    for(i = 0; i < 5; i++){
        printf("%d\n", a[i] * y[i]);
    }

    printf("\nDiferenca:\n");
    for(i = 0; i < 5; i++){

        existe = 0;

        for(j = 0; j < 5; j++){
            if(a[i] == y[j]){
                existe = 1;
            }
        }

        if(existe == 0){
            printf("%d\n", a[i]);
        }
    }

    printf("\nIntersecao:\n");
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            if(a[i] == y[j]){
                printf("%d\n", a[i]);
            }
        }
    }

    printf("\nUniao:\n");

    for(i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }

    for(i = 0; i < 5; i++){

        existe = 0;

        for(j = 0; j < 5; j++){
            if(y[i] == a[j]){
                existe = 1;
            }
        }

        if(existe == 0){
            printf("%d\n", y[i]);
        }
    }

    return 0;
  
}
