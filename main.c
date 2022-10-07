#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char pergunta[200];	
	
	printf("digite uma pergunta\n");
	gets(pergunta);
	
	int opcao = 0;
	int totalsim = 0;
	double totalnao = 0;
	double totalvotos = 0;
	
	double percentualsim = 0.0;
	double percentualnao = 0.0;
	
	do{
		printf("%s\n", pergunta);
		printf("digite 1 - para sim, 2 - para nao e 3 - para encerrar.\n");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1 :{
				totalsim = totalsim +1;
				totalvotos = totalvotos +1;
				system("cls");
				break;
			}
			case 2 :{
				totalnao = totalnao +1;
				totalvotos = totalvotos +1;
				system("cls");
				break;
			}
			case 3 :{
				percentualsim = (totalsim * 100) / totalvotos;
				percentualnao = (totalnao * 100) / totalvotos;
				
				printf("resultado da pesquisa\n");
				printf("%s\n", pergunta);
				printf("sim -> %.2f\n", percentualsim);
				printf("nao -> %.2f\n", percentualnao);
				break;
			}
			default :{
				printf("opcao invalida\n");
				break;
			}
		}
		
		
	} while(opcao != 3);
	
	
	
	return 0;
}
