#include <stdio.h>
int main(){
	
	float h, sm, nutrab, imp, sab, NS;
	
	printf("Digite O numero de horas trabalhadas:");
	scanf("%f", &num_h_trab);
	
	printf("Digite O valor do salario minimo:");
	scanf("%f", &sm);
	
	h = sal_mim / 2;
	sab = nutrab * h;
	imp = sab * (3 / 1000.0);
	NS = sab - imp;
	
	printf("a) A hora trabalhada vale a metade do sal�rio m�nimo, Que e = %f:\n", h);
	printf("b) O sal�rio bruto equivale ao n�mero de horas trabalhadas multiplicado pelo valor da hora trabalhada que e = %f:\n", sal_bruto);
	printf("c) O imposto equivale a 3% do sal�rio bruto., Que e = %f:\n", imp);
	printf("d) O sal�rio a receber equivale ao sal�rio bruto menos o imposto., Que e = %f:\n", NS);
	
	return 0;
}
