/*

Esta estrutura de repeti��o, garante que o bloco de instru��es seja executado no m�nimo uma vez, j� que 
a condi��o que controla o la�o � apenas testada no final. 


*/


#include <stdio.h>

int main (void){
	
	float nota1 = 0, nota2 = 0, media = 0;
	int resp; // vari�vel de controle
	
	do {  // Iremos calcular no m�nimo a m�dia de 1 aluno
		
		printf("Digite a 1a nota: ");
		scanf("%f", &nota1);
		printf("Digite a 2a nota: ");
		scanf("%f", &nota2);
		
		media = (nota1+nota2)/2;
		printf("Media do aluno = %.2f\n", media);
		
		printf("Digite 1 para continuar ou 2 para sair\n");
		scanf("%d", &resp);
			
	} while (resp == 1);
	
	return 0;	
}
