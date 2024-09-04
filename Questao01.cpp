/*1. A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação 
semestral e a um exame final. A média das três notas mencionadas anteriormente obedece aos pesos a seguir:

Nota: Trabalho de Laboratório - Avaliação Semestral - Exame Final
Peso: 			2			  - 		3			-		5		

Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue a tabela abaixo:

Média Ponderada: 8,00 até 10,00 - 7,00 até 7,99 - 6,00 até 6,99 - 5,00 até 5,99 - 0,00 até 4,99
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

	
	printf("\n\tINSIRA A NOTA DO TRABALHO DE LABORATÓRIO: ");
	scanf("%f", &trabalho_laboratorio);
	
	printf("\n\tINSIRA A NOTA DA AVALIAÇÃO SEMESTRAL: ");
	scanf("%f", &avaliacao_semestral);
	
	printf("\n\tINSIRA A NOTA DO EXAME FINAL: ");
	scanf("%f", &exame_final);
	
	
	media_ponderada = ((trabalho_laboratorio * 2) + (avaliacao_semestral * 3) + (exame_final * 5))/10;
	printf("\n\n\n\tMÉDIA: %.2f", media_ponderada);
	
	
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
