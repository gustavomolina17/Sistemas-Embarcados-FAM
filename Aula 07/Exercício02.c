/*

Fa�a um programa que receba as notas de tr�s provas e calcule a m�dia. Para o c�lculo, escreva uma fun��o.
O programa deve imprimir a m�dia ao final.

*/

#include <stdio.h>

// Cria��o da Fun��o

float calculaMedia (float n1, float n2, float n3){
	return((n1+n2+n3)/3);	
}

void main(){
	float n1, n2, n3, media = 0;
	printf("Digite as 3 notas do aluno: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	media = calculaMedia(n1,n2,n3);
	printf("\nMedia final: %.2f",media);	
}
