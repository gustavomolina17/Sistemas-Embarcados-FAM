/* 2-) O escrit�rio de contabilidade Super Cont�bil est� realizando o reajuste do sal�rio dos funcion�rios de todos os
seus clientes. Para isso, est�o utilizando como refer�ncia o reajuste acordado com os sindicatos de cada classe trabalhadora,
conforme apresentado na tabela a seguir. Para ajudar o escrit�rio nesta tarefa, fa�a um programa em C que receba o sal�rio
atual, o cargo conforme especificado na tabela a seguir e realize o c�lculo do reajuste do sal�rio. Ao t�rmino do c�lculo
o programa deve imprimir o valor do reajuste e o novo sal�rio do funcion�rio.

A figura est� no Github. */


#include <stdio.h>

int main(void){
	
	int cargo;
	float salAtual, reajuste;
	
	printf("Digite o codigo do funcionario: ");
	scanf("%d", &cargo);
	
	printf("Digite o salario atual do funcionario: ");
	scanf ("%f", &salAtual);
	
	if (cargo == 1)
	reajuste = (salAtual * 7) / 100;
	
	else if (cargo == 2)
	reajuste = (salAtual * 9) / 100;
	
	else if (cargo == 3)
	reajuste = (salAtual * 5) / 100;
	
	else
	reajuste = (salAtual * 12) / 100;
	
	printf("O reajuste salarial eh de %.2f%%\n",reajuste);
	printf("O salario atualizado eh: %.2f", salAtual+reajuste);
	
}
