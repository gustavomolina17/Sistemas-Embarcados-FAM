/*

A utiliza��o do continue dentro de um la�o de repeti��o faz com que a instru��o atual
(ou bloco de instru��es atual) SEJA INTERROMPIDA e PASSA PARA A PR�XIMA itera��o do la�o.

No continue a condi��o do la�o continua sendo testada, bem como o incremento continua
sendo executado 

*/

#include <stdio.h>

int main(void){
	
	int i;
	
	for(i=1; i<=10; i++)
	{
		if(i%2 == 0) // se i for par n�o faz nada e pula para a pr�xima itera��o
		{
			continue;
		}
		else // imprime os n�meros impares
		{
			printf("Numero: %d \n",i);
		}
		
		printf("Numero impar!!\n\n");		
	}
	printf("Final do Programa!\n\n");
	return 0;	
}
