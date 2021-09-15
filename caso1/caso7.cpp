#Include<stdio.h>
int main(){
	float pfv,pld,pim,ldis,imposto,pfi;
	printf("Insira o preço de fabrica de um veiculo, o percentual de lucro do distribuidor e o percentual de imposto");
	scanf("%f,%f,%f",&pfv,&pld,&pim );
	ldis=pfv+ppld;
	imposto=pim-pfv;
	pfi=pfv+ldis-imposto;
	printf("o lucro do distribuidor =%f",ldis);
	printf("o imposto =%f",imposto);
	printf("o preço final=%f",pfi);
}
