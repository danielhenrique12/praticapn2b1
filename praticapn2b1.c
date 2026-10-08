#include <stdio.h>
	int main(){
		int qtd, 
		
		printf("Digite a quantidade de equipes: ");
		scanf("%d", &qtd);
		
		while(qtd < 3 || qtd > 10){
			printf("Valor invalido. Digite novamente: ");
			scanf("%d", &qtd);
		}
		
		
	}
