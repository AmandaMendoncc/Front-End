/*1. A nota final de um estudante � calculada a partir de tr�s notas atribu�das respectivamente a um trabalho de laborat�rio, a uma avalia��o 
semestral e a um exame final. A m�dia das tr�s notas mencionadas anteriormente obedece aos pesos a seguir:

Nota: Trabalho de Laborat�rio - Avalia��o Semestral - Exame Final
Peso: 			2			  - 		3			-		5		

Fa�a um programa que receba as tr�s notas, calcule e mostre a m�dia ponderada e o conceito que segue a tabela abaixo:

M�dia Ponderada: 8,00 at� 10,00 - 7,00 at� 7,99 - 6,00 at� 6,99 - 5,00 at� 5,99 - 0,00 at� 4,99
Conceito: 				A 	    - 		B		-		C		-		D		-		E		*/
       
       
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

main()
{
	setlocale(LC_ALL,"");
	system("color 0D");
	
	float trabalho_laboratorio, avaliacao_semestral, exame_final, media_ponderada; 

	
	printf("\n\tINSIRA A NOTA DO TRABALHO DE LABORAT�RIO: ");
	scanf("%f", &trabalho_laboratorio);
	
	printf("\n\tINSIRA A NOTA DA AVALIA��O SEMESTRAL: ");
	scanf("%f", &avaliacao_semestral);
	
	printf("\n\tINSIRA A NOTA DO EXAME FINAL: ");
	scanf("%f", &exame_final);
	
	
	media_ponderada = ((trabalho_laboratorio * 2) + (avaliacao_semestral * 3) + (exame_final * 5))/10;
	printf("\n\n\n\tM�DIA: %.2f", media_ponderada);
	
	
	if(media_ponderada>=0 && media_ponderada<5)
		printf("\n\n\tCONCEITO E");
	else
	if(media_ponderada>=5 && media_ponderada<6)
		printf("\n\n\tCONCEITO D");
	else
	if(media_ponderada>=6 && media_ponderada<7)
		printf("\n\n\tCONCEITO C");
	else
	if(media_ponderada>=7 && media_ponderada<8)
		printf("\n\n\tCONCEITO B");
	else
		printf("\n\n\tCONCEITO A");
	
	return(0);	
}
