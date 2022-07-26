#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "functions.h"

void contraPc();
void sobre();

int opcUsuario = 0, opcComputador = 0;
char altUsuario[10], altComputador[10], acao[15];
int jogar = 1, usuarioVenceu = 0;


int main(){
	int opc;
	
	do{
		limpaTela();
		printf("_____________Sheldon Mania____________\n\n");
		printf("1. Jogar.\n");
		printf("2. Sobre.\n");
		printf("0. Sair.\n");
		scanf("%d", &opc);
			
		switch(opc){
			case 1:
				contraPc();
				break;
			case 2: 
				sobre();
				break;
			case 0:
				break;
		}
	} while(opc != 0);
	return 0;
}

void sobre(){
	do{
		limpaTela();
		printf("O jogo e uma expansao do classico jogo pedra, papel e tesoura. Que atua sob\n");
		printf("o mesmo principio basico, mas inclui outras duas armas adicionais: o lagarto e Spock.\n");
		printf("\nSendo assim entao...\nPapel cobre a Pedra\nPedra quebra a Tesoura\nPedra esmaga o Lagarto\nSpock vaporiza a Pedra\nTesoura corta o Papel");
		printf("\nLagarto come o Papel\nPapel desmente o Spock\nLagarto envenena o Spock\nSpock quebra a Tesoura\nTesoura decapta o Lagarto\n");
		barra();
		printf("Digite 0 para voltar ao Menu.\n");
		scanf("%d", &jogar);
	} while (jogar);
}

void contraPc(){
	do{
		limpaTela();
		printf("Boa sorte! E que os jogos comecem!xD\n");
		printf("1. PEDRA\n");
		printf("2. PAPEL\n");
		printf("3. TESOURA\n");
		printf("4. LAGARTO\n");
		printf("5. SPOCK\n");
		printf("\nEscolha um numero sabiamente meu caro: ");
		scanf("%d", &opcUsuario);
		fflush(stdin);
		
		//Gera um numero aleatorio que e atribuido a jogada do computador.
	  srand(time(NULL));
	  opcComputador = rand()%5+1;
	
	  strcpy(altUsuario, devolverOpcao(opcUsuario)); //guarda a opcao do usuario.
		strcpy(altComputador, devolverOpcao(opcComputador)); //guarda a opcao do computador.
		
		barra();
	  printf("---| O jogador escolheu: %s |---\n", altUsuario);
		printf("---| O computador escolheu: %s |---\n", altComputador);
		barra();
	
	  //Verifica se houve empate
	  if (opcUsuario == opcComputador) {
	    	barra();
			printf("---------| Houve Empate!! |---------\n");
			barra();
	  } else {
	    usuarioVenceu = resultadoJogo(opcUsuario, opcComputador);
	
	  if(usuarioVenceu){
	  	strcpy(acao, devolverAcao(opcUsuario, opcComputador));
	    printf("%s %s %s. Jogador venceu!!\n", altUsuario, acao, altComputador);
	    barra();
	  } else {
	    strcpy(acao, devolverAcao(opcComputador, opcUsuario));
	    printf("%s %s %s. Computador venceu!!\n", altComputador, acao, altUsuario);
	    barra();
	    }
	  }
		printf("Deseja jogar novamente?(1-SIM / 0-NAO)\n");
		scanf("%d", &jogar);
		fflush(stdin);
	} while(jogar != 0);
}
