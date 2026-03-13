#include <stdio.h>

int main (){
	
	int vetor[10], menor, maior, i;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &vetor[i]);
	}
	
	maior = vetor [0];
	menor = vetor [0];
	
	for(i = 0; i < 10; i++){
		if(vetor[i] > maior){
			maior = vetor[i];
		}
		if(vetor[i] < menor){
			menor = vetor[i];
	}	
}

	printf("\nMaior: %d\n", maior);
	printf("\nMenor: %d\n", menor);
	
	return 0;
	
}
	
