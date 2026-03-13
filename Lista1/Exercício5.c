#include <stdio.h>

int main (){
	
	int vetor[10], i, pares = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = 0; i < 10; i++){
		if(vetor[i] % 2 == 0){
			pares++;
		}
	}
	
	printf("Quantidade de pares: %d\n", pares);
	
	return 0;
	
}
	
