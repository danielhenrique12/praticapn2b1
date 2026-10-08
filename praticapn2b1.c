/* André Antunes, Daniel Henrique, Gustavo Martins */
#include <stdio.h>
	int main(){
		int qtd, opcao, 
		numVit, numEmp, numDer, numJogos, 
		somaVit, somaEmp, somaDer, 
		excCamp, boaCamp, campReg, campRuim, 
		maiorPont = 0, menorPont , contador = 0;
		float media;
		
		printf("Digite a quantidade de equipes e de jogos de cada: ");
		scanf("%d,%d", &qtd, &numJogos);
		
		while(qtd < 3 || qtd > 10){
			printf("\nValor invalido. Digite novamente: ");
			scanf("%d", &qtd);
		}
		
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
				printf("\n1- Registrando resultados do campeonato...\n ");
				int i;
					for( i = 1; i < qtd; i++){
				printf("\nDigite o numero de vitorias, empates e derrotas do time %d:", opcao);
				scanf("%d,%d,%d", &numVit, &numEmp, &numDer);
				while(numVit + numEmp + numDer != numJogos){
				printf("\nValores invalidos. Digite o numero de vitorias, empates e derrotas do time %d novamente:", opcao);
				scanf("%d,%d,%d", &numVit, &numEmp, &numDer);
			}
			pontos = (numVit * 3) + (numEmp * 1) + (numDer * 0);

			printf("\nEquipe %d: %d vitorias, %d empates e %d derrota(s)\n",
      		 i, numVit, numEmp, numDer);

			printf("Pontuacao: %d pontos\n", pontos);

			if(pontos >= 15){
  		    printf("Situacao: Excelente campanha\n");
  		    excCamp ++;
			}
			else if(pontos >= 10){
		    printf("Situacao: Boa campanha\n");
		    boaCamp ++;
			}
			else if(pontos >= 5){
		    printf("Situacao: Campanha regular\n");
		    campReg ++;
			}
			else{
		    printf("Situacao: Campanha ruim\n");
		    campRuim ++;
			}
			somaVit += numVit;
			somaEmp += numEmp;
			somaDer += numDer;
			contador++;
		}
				break;
			case 2:
				printf("Mostrando resumo do campeonato:\n");
				if(contador==0){
					
				}
				break;
			case 3:
				printf("Mostrando o regulamento...\n");
				printf("\nPontuacao por resultado:\n");
    			printf("Vitoria: 3 pontos\n");
    			printf("Empate: 1 ponto\n");
    			printf("Derrota: 0 pontos\n");
    			printf("\nSituacao da campanha:\n");
   				printf("15 pontos ou mais: Excelente campanha\n");
   				printf("Entre 10 e 14 pontos: Boa campanha\n");
    			printf("Entre 5 e 9 pontos: Campanha regular\n");
   				printf("Menos de 5 pontos: Campanha ruim\n");
   				printf("Configuracao inicial: \n");
   				printf("Quantidade de equipes: entre 3 e 10.\n");
				break;
			case 4:
				printf("Simulando campanha de uma equipe...\n");
				break;
			case 5:
				printf("Sistema encerrado\n");
				break;
			default:
				printf("Opcao invalida! Escolha um numero entre 1 e 5.\n");

		}
	}
/* André Antunes, Daniel Henrique, Gustavo Martins */
#include <stdio.h>
	int main(){
		int qtd, opcao, 
		numVit, numEmp, numDer, numJogos, 
		somaVit, somaEmp, somaDer, somaPontos, 
		excCamp, boaCamp, campReg, campRuim, equipeMaior, empatadosMaior, equipeMenor, empatadosMenor,
		maiorPont = 0, menorPont, contador = 0;
		float media;
		
		printf("Digite a quantidade de equipes e de jogos de cada: ");
		scanf("%d,%d", &qtd, &numJogos);
		
		while(qtd < 3 || qtd > 10){
			printf("\nValor invalido. Digite novamente: ");
			scanf("%d", &qtd);
		}
		
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
		
		while(opcao != 5){
		switch(opcao){
			case 1:
				printf("\n1- Registrando resultados do campeonato...\n ");
				int i;
					for(i = 1; i < qtd; i++){
				printf("\nDigite o numero de vitorias, empates e derrotas do time %d:", opcao);
				scanf("%d,%d,%d", &numVit, &numEmp, &numDer);
				while(numVit + numEmp + numDer != numJogos){
				printf("\nValores invalidos. Digite o numero de vitorias, empates e derrotas do time %d novamente:", opcao);
				scanf("%d,%d,%d", &numVit, &numEmp, &numDer);
			}
			pontos = (numVit * 3) + (numEmp * 1) + (numDer * 0);

			printf("\nEquipe %d: %d vitorias, %d empates e %d derrota(s)\n",
      		 i, numVit, numEmp, numDer);

			printf("Pontuacao: %d pontos\n", pontos);

			if(pontos >= 15){
  		    printf("Situacao: Excelente campanha\n");
  		    excCamp ++;
			}
			else if(pontos >= 10){
		    printf("Situacao: Boa campanha\n");
		    boaCamp ++;
			}
			else if(pontos >= 5){
		    printf("Situacao: Campanha regular\n");
		    campReg ++;
			}
			else{
		    printf("Situacao: Campanha ruim\n");
		    campRuim ++;
			}
			somaVit += numVit;
			somaEmp += numEmp;
			somaDer += numDer;
			contador++;
			if(pontos > maiorPont){
				maiorPont = pontos;
				equipeMaior = i;
				empatadosMenor = 1;
			}
		}
				break;
			case 2:
				printf("Mostrando resumo do campeonato:\n");
				if(contador==0){
					printf("\nRegistre os resultados primeiro. ");
				}
				break;
			case 3:
				printf("Mostrando o regulamento...\n");
				break;
			case 4:
				printf("Simulando campanha de uma equipe...\n");
				break;
			default:
				printf("Opcao invalida.\n ");
		}
	}
		printf("Programa encerrado.");
}
