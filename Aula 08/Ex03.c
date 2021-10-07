/*

Escreva um programa em C que leia 5 valores inteiros e imprima para cada um o seu correspondente valor absoluto.
Para obter o valor absoluto do n�mero utilize a fun��o Absoluto especificada abaixo:

Nome: Absoluto

Descri��o: Retorna o valor absoluto do n�mero fornecido.

Entrada: int n

Sa�da: (int) O respectivo valor absoluto de n.

*/

#include <stdio.h>

int absoluto (int n){
	
	if (n<0){
		return n*-1; // n = n * -1 (Caso eu digite um n� negativo, ele � transformado em +)
	} else{
		return n;
	}	
}


int main(){
	
	int numero,i;
	for (i=0; i<5; i++){
		printf("Digite o %d numero inteiro desejado: ", i+1);
		scanf("%d",&numero);
		printf ("Valor absoluto: %d\n", absoluto(numero));
	}	
	return 0;	
}
