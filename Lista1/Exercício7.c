#include <stdio.h>

int main (){
	
	int vetor[10], maior, posicao, i;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor [0];
	posicao = 0;
	
	for(i = 0; i < 10; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
			posicao = i;
		}
}
    
	printf("\nMaior: %d\n", maior);
	printf("\nPosicao: %d\n", posicao);
	
	return 0;
	
}
