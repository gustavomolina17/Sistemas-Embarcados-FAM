// Exemplo 01 : If / Else

// Fa�a um programa que pe�a ao usu�rio 2 n�meros inteiros. O programa deve exibir a soma desses n�meros. Caso a soma seja > 17
// exibir a mensagem : "A soma dos n�meros � maior que 17". Caso contr�rio, exibir: " Soma menor que 17".

#include <stdio.h>

int main(void){
	
	int a, b, soma;
	printf("Digite um numero inteiro: ");
	scanf("%d", &a);
	
	printf("Digite outro numero inteiro: ");
	scanf("%d", &b);
	
	soma = a + b;
	printf("O valor da soma eh = %d\n",soma);
	
// Estrutura de Decis�o

if (soma > 17){
	
	printf("A soma dos numeros eh maior que 17\n");		
}
	else {
	printf("A soma dos numeros eh menor que 17\n");	
	}
	
	return 0;	
}
