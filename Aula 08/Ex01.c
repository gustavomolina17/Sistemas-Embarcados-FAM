// Escreva uma fun��o que receba dois n�meros inteiros retorne o menor n�mero.

#include <stdio.h>

int compara (int a, int b){
	if (a>b){
		return b;
	} else{
		return a;
	}	
}

int main(){
	int n1, n2, res;
	printf("Digite dois numeros inteiros separados por espaco:\n");
	scanf("%d %d", &n1,&n2);
	
	res = compara(n1,n2);
	printf("O menor numero eh: %d\n",res);
	
	return 0;
		
}
