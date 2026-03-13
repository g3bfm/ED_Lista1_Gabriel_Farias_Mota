#include <stdio.h>

int main (){
	
	int l[6]={1, 0, 5, -2, -5, 7}, soma, i;
	
	soma = l[0] + l[1] + l[5];
	printf("Soma: %d\n", soma);
	
	l[4] = 100;
	
	for(i = 0; i < 6; i++){
		printf("%d\n", l[i]);
	}
	
	return 0;
	
}
