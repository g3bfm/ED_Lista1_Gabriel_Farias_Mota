#include <stdio.h>

int main (){
	
	int vetor[6], i;
	
	for(i = 0; i < 6; i++){
		scanf("%d", &vetor[i]);
	}
	
	for(i = 5; i >= 0; i--){
		printf("\n%d\n", vetor[i]);
	}
	
	return 0;
	
}
