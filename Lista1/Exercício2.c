#include <stdio.h>

int main (){
	
    int valor[6], i;
    
    for(i = 0; i < 6; i++){
    	scanf("%d\n", &valor[i]);
	}
	
	for(i = 0; i < 6; i++){
		printf("\n%d\n\n", valor[i]);
	}
	
	return 0;
	
}
