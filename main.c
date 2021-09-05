#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "functions.h"

int contraPc();
int contraJogador();

int opcUsuario = 0, opcComputador = 0;
char altUsuario[10], altComputador[10], acao[15];
int jogar = 1, usuarioVenceu = 0;
int opc;

int main(){
	do{
		limpaTela();
		printf("_____________Sheldon Mania____________\n\n");
		printf("1. Jogar contra o computador.\n");
		printf("2. Jogar contra outro jogador.\n");
		printf("3. Sobre.\n");
		printf("0. Sair.\n");
		scanf("%d", &opc);
			
		switch(opc){
			case 1:
				contraPc();
				break;
			case 2:
				contraJogador();
				break;
			case 3: 
				limpaTela();
				printf("Ola, eu me chamo Marcos Almeida e atualmente curso ADS pela ESTACIO-RJ e\n");
				printf("sou tambem criador dessa versao de jogo que foi nomeado por mim de Sheldon Mania,\n");
				printf("ele e uma expansao do classico jogo pedra, papel e tesoura. Que atua sob\n");
				printf("o mesmo principio basico, mas inclui outras duas armas adicionais: o lagarto e Spock.\n");
				printf("\nSendo assim entao...\nPapel -> Pedra\nPedra -> Tesoura\nPedra -> Lagarto\nSpock -> Pedra\nTesoura -> Papel");
				printf("\nLagarto -> Papel\nPapel -> Spock\nLagarto -> Spock\nSpock -> Tesoura\nTesoura -> Lagarto\n");
				break;
			case 4:
				break;
		}
	} while(opc != 0);
	return 0;
}

int contraPc(){
	do{
		limpaTela();
		printf("Voce escolheu jogar contra o computador, boa sorte! xD\n");
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
	
	    printf("Jogador escolheu: %s \n", altUsuario);
		printf("Computador escolheu: %s\n", altComputador);
	
	    //Verifica se houve empate
	    if (opcUsuario == opcComputador) {
			printf("Houve Empate!!\n");
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
		printf("Deseja jogar novamente?(1-SIM / 0-NAO) ");
		scanf("%d", &jogar);
		fflush(stdin);
	} while(jogar != 0);
	return 0;
}

int contraJogador(){	
	// Aqui a variavel 'opcUsuario' atuara como 'jogador 1' 
	// e a variavel 'opcComputador' atuara como 'jogador 2' 
	do{
		limpaTela();		
		printf("Voce escolheu jogar contra outro jogador, Boa sorte! xD!\n");
		printf("1. PEDRA\n");
		printf("2. PAPEL\n");
		printf("3. TESOURA\n");
		printf("4. LAGARTO\n");
		printf("5. SPOCK\n");
		printf("\nEscolha do jogador 1: ");
		scanf("%d", &opcUsuario);
		fflush(stdin);
		printf("\nEscolha do jogador 2: ");
		scanf("%d", &opcComputador);
		fflush(stdin);

		strcpy(altUsuario, devolverOpcao(opcUsuario));
		strcpy(altComputador, devolverOpcao(opcComputador));
		
		printf("O jogador 1 escolheu: %s\n", altUsuario);
		printf("O jogador 2 escolheu: %s\n", altComputador);
		
		if (opcUsuario == opcComputador) {
			printf("Houve Empate!!\n");
		} else {
			usuarioVenceu = resultadoJogo(opcUsuario, opcComputador);
		
		if(usuarioVenceu){
			strcpy(acao, devolverAcao(opcUsuario, opcComputador));
			printf("%s %s %s. O jogador 1 venceu!!\n", altUsuario, acao, altComputador);
			barra();
		} else {
			strcpy(acao, devolverAcao(opcComputador, opcUsuario));
			printf("%s %s %s. O jogador 2 venceu!!\n", altComputador, acao, altUsuario);
			barra();
			}
		}
	printf("Deseja jogar novamente?(1-SIM / 0-NAO) ");
	scanf("%d", &jogar);
	fflush(stdin);
	} while(jogar != 0);
	return 0;
}
