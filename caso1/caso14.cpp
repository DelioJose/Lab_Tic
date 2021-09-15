#include<stdio.h>
	int main(){
 
 	   	   	   int n, contp, contim, sp, sim;
 	   	   	   float mp, mim;
 	   	   	   
 	   	   	   for(int i= 1; i<10; i++){
						  printf("Digite o numero");
						  scanf("%i",&n);
						   
						   	   if(n%2 == 0){
									  sp += n;
									  contp++;
								  }else{
									  sim += n;
									  contim++;
								  }
					  }
					  
					  mp = (somap / contp);
					  mim = (somaim / contim);
					  
					  printf("A media dos numeros pares sao:%f\n", mp);
					  printf("A media dos numeros impares sao:%f", mim);
 	 	 	 
				return 0;
}
