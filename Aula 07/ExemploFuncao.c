/*

Exemplo: Fa�a um programa em C que calcule a �rea de um ret�ngulo (Base X Altura ) utilizando fun��o. Ap�s o c�lculo o 
programa deve  imprimir o valor da �rea.

*/

#include <stdio.h>

// Fazendo a modelagem da nossa fun��o

float areaRetangulo (float base, float altura){
	float area = base*altura;
	return area;
}

void main(){
	
	float vbase, valtura, varea;
	printf("Informe o valor da base do retangulo: \n");
	scanf("%f", &vbase);
	printf("Informe o valor da altura do retangulo: \n");
	scanf("%f", &valtura);
	varea = areaRetangulo(vbase,valtura);
	printf("A area do retangulo eh: %.2f m \n",varea);
		
}

