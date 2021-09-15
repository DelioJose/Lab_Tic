
#include <stdio.h>
	int main(){
		
		int psr, pg;
		
		printf("Digite o peso do saco de racao:");
		scanf("%i", &psr);
		
		printf("Digite a quantidade de racao para cada gato:");
		scanf("%i", &pg);
		
		psr *= 1000;
		
		for(int i = 0; i < 5; i++){
			psr -= ( pg * 2 );
			psr/ 1000.0;
		}
			printf("Apos cinco dias restara %f kg de racao", psr);
	
	return 0;
}
