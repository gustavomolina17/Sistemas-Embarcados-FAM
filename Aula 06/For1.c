/*

O comando for � uma estrutura de repeti��o muito utilizada em C.

Usamos o for quando sabemos EXATAMENTE quantas vezes executaremos o nosso bloco de instru��es.

Este la�o utiliza uma vari�vel para controlar a contagem do loop, bem como o seu incremento.


for (valor_inicial; condi��o_final; valor_ incremento)

{

Instru��es;

}


*/



#include <stdio.h>

int main(void){
	
	
	int contador; // vari�vel de controle do loop
	
	for (contador = 0;contador<=8;contador++){
		
		printf("%d", contador);
			
	}
	
	return 0;
	
}
