#include <stdio.h>

int main(){

    int numeros[10], pares[10], impares[10], i, par = 0, impar = 0;

    for(i = 0; i < 10; i++){
    	printf("Digite o numero %d: ", i);
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 10; i++){

        if(numeros[i] % 2 == 0){
            pares[par] = numeros[i];
            par++;
        } 
		
		else{
			
            impares[impar] = numeros[i];
            impar++;
            
        }

    }
    
    printf("\nPares:\n\n");
    	for(i = 0; i < par; i++) {
        	printf("%d\n", pares[i]);
    }

    printf("\nImpares:\n\n");
    	for(i = 0; i < impar; i++) {
        	printf("%d\n", impares[i]);
    }

    return 0;
    
}
