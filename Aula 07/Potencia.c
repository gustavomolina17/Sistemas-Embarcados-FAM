/*

Assim como a raiz quadrada a pot�ncia tamb�m faz parte da biblioteca math.h

potencia --> pow ()

A fun��o pow TEM SEMPRE 2 argumentos, o 1� argumento � o n�mero e o 2� argumento � o EXPOENTE

*/

#include <stdio.h>
#include <math.h>

void main(){
	
	float base, expoente, potencia;
	printf("Informe a base: \n");
	scanf("%f",&base);
	printf("Informe o expoente: \n");
	scanf("%f",&expoente);
	potencia = pow(base,expoente);
	printf("A potencia do numero eh: %.1f \n",potencia);
	
	
	
	
	
	
	
}
