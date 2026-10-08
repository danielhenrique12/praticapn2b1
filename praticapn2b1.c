#include <stdio.h>
	int main(){
		int qtd, opcao, numVit, numEmp, numDer, numJogos;
		
		printf("Digite a quantidade de equipes: ");
		scanf("%d", &qtd);
		
		while(qtd < 3 || qtd > 10){
			printf("\nValor invalido. Digite novamente: ");
			scanf("%d", &qtd);
		}
		numJogos = qtd * 2;
		printf("\nMENU PRINCIPAL\n");
		printf("1 - Registrar resultados do campeonato\n");
        printf("2 - Mostrar resumo do campeonato\n");
        printf("3 - Mostrar regulamento\n");
        printf("4 - Simular campanha de uma equipe\n");
        printf("5 - Encerrar sistema\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

		while (opcao < 1 || opcao > 5) {
    		printf("Opcao invalida! Digite novamente: ");
	    	scanf("%d", &opcao);
		}
	
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
		for(int opcao = 1; opcao < qtd; opcao++){
			printf("\nDigite o numero de vitorias, empates e derrotas do time %d:", opcao);
			scanf("%d,%d,%d", &numVit, &numEmp, &numDer);
			while(numVit + numEmp + numDer != numJogos){
				printf("\nValores invalidos. Digite o numero de vitorias, empates e derrotas do time %d novamente:", opcao);
				scanf("%d,%d,%d", &numVit, &numEmp, &numDer);
			}
			pontos = (numVit * 3) + (numEmp * 1) + (numDer * 0);

			printf("\nEquipe %d: %d vitorias, %d empates e %d derrota(s)\n",
      		 equipe, numVit, numEmp, numDer);

			printf("Pontuacao: %d pontos\n", pontos);

			if(pontos >= 15){
  		    printf("Situacao: Excelente campanha\n");
			}
			else if(pontos >= 10){
		    printf("Situacao: Boa campanha\n");
			}
			else if(pontos >= 5){
		    printf("Situacao: Campanha regular\n");
			}
			else{
		    printf("Situacao: Campanha ruim\n");
			}
		}
	}
