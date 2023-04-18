#include <stdio.h> 
#include <stdbool.h> 

int main(){
	
	bool i = true;
	int cont, compara;
	
	do{
	
		printf ("Contagem dos numeros divisiveis por 3 entre 0 e 10: ");
			for (cont = 0; cont <= 10; cont++){
				if (cont % 3 == 0){
					printf ("%d ", cont);
				}
			}
		
		printf ("\nDeseja repetir o codigo novamente?\n1 - Sim\n2 - Nao\n");
		scanf  ("%d", &compara);
		
		while ((compara != 1) && (compara != 2)){
			printf ("\nCodigo nao encontrado\n");
			printf ("\nPor favor, digite-o novamente: \n1 - Sim\n2 - Nao\n");
			scanf  ("%d", &compara);								
		}			
		
		if (compara == 1){
			i = true;
		} 
		else if (compara == 2){
				i = false;
				printf ("O programa sera encerrado nesse momento\n");		
			}	    		
		
	} while (i == true);
	
	return 0;	
}
