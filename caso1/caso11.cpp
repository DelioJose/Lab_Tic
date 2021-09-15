#include<stdio.h>
#include<math.h>

main(){
	int a, b, c;
	
	printf("Insira os valor de a, b e c: ");
		scanf("%d%d%d", &a, &b, &c);
		
	if(a != 0){
		float d, x1, x2;
		
		d = pow(b, 2) - 4 * a * c;
		
		if(d > 0) {
			x1 = (- (b) + pow(d, 1/2))/ (2 * a);
			x2 = (- (b) - pow(d, 1/2))/ (2 * a);
			
			printf("Sol: %f; %f", x1, x2);
		}else if(d == 0){
			x1 = -b / (2 * a);
			printf("Soluções: %f; %f", x1, x1);
		}else{
			printf("N.T.S");
		}
		
		if(b == 0 || c == 0){
			printf("\nEquação incompleta");
		}else{
			printf("\nEquação completa");
		}
	}else{
		printf("Não é uma equação do segundo grau.");
	}
}
