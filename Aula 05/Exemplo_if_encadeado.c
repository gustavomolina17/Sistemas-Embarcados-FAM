/* Exemplo 02 : If / Else encadeado

Fa�a um programa que compare 2 n�meros inteiros. O programa deve dizer: se os n�meros s�o iguais, ou dizer qual dos dois 
n�meros � maior.

*/

#include <stdio.h>

int main (void){
	
	int n1, n2;
	printf("Digite n1: ");
	scanf("%d", &n1);
	
	printf("Digite n2: ");
	scanf("%d", &n2);
	
	// Usamos um If externo para verificar logo de cara se os n�meros s�o iguais
	
	// Quando o if tiver APENAS 1 INSTRU��O, N�O � necess�rio a utiliza��a das chaves.
	
	if (n1 == n2)
	
		printf("Os numeros digitados sao iguais");	
		
	else 	
		
		if (n1>n2)
		printf("O maior valor eh = %d\n",n1);
		else
		printf("O maior valor eh = %d\n",n2);
		printf("\n");
		
		return 0;
			
	}
	
	
	
	
	
	

