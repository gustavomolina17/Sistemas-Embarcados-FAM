/* 4-) Em um campeonato nacional de arco-e-flecha, tem-se equipes de tr�s jogadores para cada estado.
Sabendo-se que os arqueiros de uma equipe n�o obtiveram o mesmo n�mero de pontos, criar um programa em C que informe
se uma equipe foi classificada, de acordo com a seguinte especifica��o:

� Ler os pontos obtidos por cada jogador da equipe;

� Mostrar esses valores em ordem decrescente;

� Se a soma dos pontos for maior do que 100, imprimir a m�dia aritm�tica entre eles, caso contr�rio,
  imprimir a mensagem "Equipe desclassificada".
  
*/

#include <stdio.h>

 void main()
 {
 float n1, n2, n3;
 printf("Digite os pontos do primeiro atleta: ");
 scanf("%f",&n1);
 printf("Digite os pontos do segundo atleta: ");
 scanf("%f",&n2);
 printf("Digite os pontos do terceiro atleta: ");
 scanf("%f",&n3);
 if (n1 < n2 && n1 < n3) {
 if (n2 < n3)
 printf("%.2f, %.2f, %.2f", n1, n2, n3);
 else
 printf("%.2f, %.2f, %.2f", n1, n3, n2);
 }
 else if (n2 < n1 && n2 < n3) {
 if (n1 < n3)
 printf("%.2f, %.2f, %.2f", n2, n1, n3);
 else
 printf("%.2f, %.2f, %.2f", n2, n3, n1);
 }
 else {
 if (n2 < n1)
 printf("%.2f, %.2f, %.2f", n3, n2, n1);
 else
 printf("%.2f, %.2f, %.2f", n3, n1, n2);
 }
 float media = (n1 + n2 + n3) / 3;
 if ((n1 + n2 + n3) >= 100)
 printf("\n A media de pontos eh %.2f", media);
 else
 printf("\nEquipe desclassificada");
 }
