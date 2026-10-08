#include <stdio.h>
	int main(){
		int qtd, opcao, numVit, numEmp, numDer, numJogos;
		
		printf("Digite a quantidade de equipes: ");
		scanf("%d", &qtd);
		
		while(qtd < 3 || qtd > 10){
			printf("Valor invalido. Digite novamente: ");
			scanf("%d", &qtd);
		}
		printf("MENU PRINCIPAL\n");
		printf("1 - Registrar resultados do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
	
		switch(opcao){
			case 1:
				printf("\n1- Registrando resultados do campeonato\n ");
				break;
			case 2:
				printf("Mostrando resumo do campeonato\n");
				break;
			case 3:
				printf("Mostrando o regulamento\n");
				break;
			case 4:
				printf("Simulando campanha de uma equipe\n");
				break;
			case 5:
				printf("Sistema encerrado\n");
				break;
			default:
				printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");
		}
	}
