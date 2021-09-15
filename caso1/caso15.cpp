#include<stdio.h>

main(){
	int n;
	
	do{
		printf("Digite o valor: ");
			scanf("%d", &n);
			
		if(n >= 0){
			printf("SUCESSOR (%d): %d\n", n, (n + 1));
		}
	}while(n >= 0);
}
