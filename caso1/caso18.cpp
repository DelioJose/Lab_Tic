#include<stdio.h>

main(){
	char noC[3][60];
	int diar[30], qtH = 3;
	
	
	for(int i = 0; i < quartosHotel; i++){
		printf("Insira o nome do cliente para que seja registado: ");
			scanf("%s", &noC[i]);
		
		printf("Insira a diária do cliente: ");
			scanf("%d", &diar[i]);
	}
	
	float contaCli, ganhoH = 0.0;
	printf("\n");
	for(int i = 0; i < qtH; i++){
		contaCli = 0.0;
		
		if(diaria[i] < 15){
			contaCli = (diaria[i] * 50.00) + (diar[i] * 4.00);
		}else if(diar[i] == 15){
			contaCli = (diar[i] * 50.00) + (diar[i] * 3.60);
		}else{
			contaCli = (diar[i] * 50.00) + (diar[i] * 3.00);
		}
		
		printf("O cliente %s tem uma conta de %.2f USD\n", noC[i], contaCli);
		ganhoH += contaCli;
	}
	
	printf("Total ganho do Hotel: %.2f USD", ganhoH);
	
}
