#include <stdio.h>

int main (){
	
	int vetor[8], x, y, soma, i;

	for(i = 0; i < 8; i++){
		scanf("%d", &vetor[i]);
	}
	
	scanf("%d", &x);
	scanf("%d", &y);
	
	soma = vetor[x] + vetor [y];
	
	printf("Soma das posicoes %d e %d: %d\n", x, y, soma);
	
	return 0;
	
}
