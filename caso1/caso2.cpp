#include<stdio.h>
int main(){
	float SM, SF;
	int QSM;
	printf("Insira o salario minimo");
	scanf("%f",&SM);
	printf("Insira o salario do funcionario");
	scanf("%f",&SF);
	QSM = SF / SM;
	printf("a quantidade de salario minimo = %d \n",QSM);
}
