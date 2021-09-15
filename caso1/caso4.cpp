#include<stdio.h>
int main(){
	float SF, NS, AUM;
	printf("Insira o salario do funcionario");
	scanf("%d",&SF);
	AUM=(SF*25)/100;
	NS=SF+AUM;
	printf("aumento =%d",AUM);
	printf("O novo salario =%d",NS);
}
