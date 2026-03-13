#include <stdio.h>

int main (){
	
    float valor[10], quadrado[10];
    int i;
    
    for(i = 0; i < 10; i++){
    	scanf("%f", &valor[i]);
	}
	
	for(i = 0; i < 10; i++){
		quadrado[i] = valor[i] * valor[i];
	}
	
	printf("Vetor original:\n");
		for(i = 0; i < 10; i++){
			printf("%.2f\n", valor[i]);
	}
	
	printf("Vetor ao quadrado:\n");
		for(i = 0; i < 10; i++){
			printf("%.2f\n", quadrado[i]);
		}
		
		return 0;
		
}
