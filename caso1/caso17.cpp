#include<stdio.h>

main(){
	int n,re= 1;
	
	printf("Insira o valor: ");
		scanf("%d", &n);
		
	printf("\n");
	for(int i = n; i >= 1; i--){
		if(i != 1){
			printf("%d x ", i);
		}else{
			printf("%d = ", i);
		}
		
		re *= i;
	}
	
	printf("%d", re);
}
