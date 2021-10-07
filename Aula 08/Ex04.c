/*

Escreva um programa que leia 5 n�meros inteiros positivos
(utilize uma fun��o que leia esse n�mero e verifique se ele � positivo).
Para cada n�mero informado escrever a soma de seus divisores (exceto ele mesmo).
Utilize a fun��o SomaDivisores para obter a soma.

Nome: SomaDivisores

Descri��o: Calcula a soma dos divisores do n�mero informado (exceto ele mesmo).

Entrada: Um n�mero inteiro e positivo.

Sa�da: A soma dos divisores.

Exemplo: Para o valor 8: 1+2+4 = 7.

*/

#include <stdio.h>

int SomaDivisores(int n){
	
	int i = 1;
	int soma = 0;
	
	printf("\tdivisores de %d:", n);
	while (i<n){ // La�o de repeti��o que vai de 1 at� o valor de n
		if (n%i == 0){ // O numero n � divisivel por i
			soma += i; // Soma dos divisores
			printf("%d, ",i);	
		}	
		i++;	
	}	
	return soma;	
}

int main(){
	
	int numero, i;
	
	for(i=0; i<5; i++){
		
		printf("digite o %d numero: ", i+1);
		scanf("%d", &numero);
		printf("\n\tSoma dos divisores: %d\n", SomaDivisores(numero));		
	}
	return 0;	
}

