#include<stdio.h>

main(){
	float altura15, maior, menor;
	
	for(int i = 1; i <= 4; i++){
		printf("Insira a altura: ");
			scanf("%f", &altura15);
		
		if(i == 1){
			maior = altura15;
			menor = altura15;
		}
		
		if(altura15 > maior){
			maior = altura15;
		}
			
		if(altura < menor){
			menor = altura15;		
		}
	}
	
	printf("\nMenor altura do grupo: %.2f", menor);
	printf("\nMaior altura do grupo: %.2f", maior);
}
