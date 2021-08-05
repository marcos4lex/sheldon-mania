#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void barra();


int main (){
	
	int jogador, computador;
	char jogarNovamente;
	setlocale(LC_ALL, "");
	system("clear||cls");
	
		do {
			
			//Menu do jogo
			printf("_____________Sheldon Mania____________\n\n");
			printf("1. PEDRA\n");
			printf("2. PAPEL\n");
			printf("3. TESOURA\n");
			printf("4. LAGARTO\n");
			printf("5. SPOCK\n");
			printf("\nEscolha um número sabiamente meu caro: ");
			scanf("%d", &jogador);
			printf("\n____________________________________\n\n");
			
			switch (jogador) {
			
				case 1:
					printf("Jogador escolheu PEDRA\n");
					break;
	
				case 2:
					printf("Jogador escolheu PAPEL\n");
					break;
	
				case 3:
					printf("Jogador escolheu TESOURA\n");
					break;
	
				case 4:
					printf("Jogador escolheu LAGARTO\n");
					break;
	
				case 5:
					printf("Jogador escolheu SPOCK\n");
					break;
	
				default:
					printf("OPÇÃO INVÁLIDA VOCÊ ESCOLHEU MEU CARO PADAWAN, TENTE OUTRA VEZ!!\n");
				}
		
			
				//Gera um número aleatorio que é atribuido a algum movimento para representar o computador 		
				srand(time(NULL));
				computador=("%d",rand()%5 + 1);
				
				//Caso haja um empate
			   	if(jogador == computador)
				printf("FOI UM EMPATE!!\n");
			
			
			   //Condição de vitoria de pedra sobre lagarto
			   else if(jogador == 1 && computador == 4 || computador == 1 && jogador == 4) {
			       if(jogador == 1){
			       		printf("Computador escolheu LAGARTO");
			       		barra();
			        	printf("Pedra esmaga Lagarto, o jogador venceu!!");
			        	barra();
				   }
			       		
			       else {
				    	printf("Computador escolheu PEDRA");
				    	barra();
				        printf("Pedra esmaga Lagarto, o computador venceu!!");
				        barra();
				   }			    	
			   }
				
			   //Condição de vitoria de pedra sobre tesoura
			   else if(jogador == 1 && computador == 3 || computador == 1 && jogador == 3) {
			        if(jogador == 1) {
			        	printf("Computador escolheu TESOURA");
			        	barra();
			        	printf("Pedra amassa tesoura, o jogador venceu!!");
			        	barra();
					}
			        	
			        else {
				        printf("Computador escolheu PEDRA");
				        barra();
				        printf("Pedra amassa tesoura, o computador venceu!!");
				        barra();
					}			        
			   }
			   
			   //Condição de vitoria de papel sobre pedra
			   else if(jogador == 2 && computador == 1 || computador == 2 && jogador == 1) {
			       if(jogador == 2) {
			       	printf("Computador escolheu PEDRA");
			       		barra();
			        	printf("Papel cobre Pedra, O jogador venceu!!");
			        	barra();
				   }
			       		
			       else {
			    		printf("Computador escolheu PAPEL");
			        	barra();
			        	printf("Papel cobre Pedra, O computador venceu!!");
			        	barra();
				   }			        
			   }  
			   
			   //Condição de vitoria de papel sobre spock
			    else if(jogador == 2 && computador == 5 || computador == 2 && jogador == 5) {
			    	if(jogador == 2) {
			    		printf("Computador escolheu SPOCK");
			    		barra();
			    		printf("Papel refuta Spock, o jogador venceu!!");
			    		barra();
					}
			    		
			        else {
			        	printf("Computador escolheu PAPEL");
			    		barra();
			        	printf("Papel refuta Spock, o computador venceu!!");
			        	barra();
					}			    	
			   }
			   
			   //Condição de vitoria de tesoura sobre papel
			   else if(jogador == 3 && computador == 2 || computador == 3 && jogador == 2) {
			       if(jogador == 3) {
			       		printf("Computador escolheu PAPEL");
			       		barra();
			        	printf("Tesoura corta Papel, O jogador venceu!!");
			        	barra();
				   }
			       		
			       else {
			    		printf("Computador escolheu TESOURA");
			    		barra();
			        	printf("Tesoura corta Papel, O computador venceu!!");
			        	barra();
				   }			    	
			   }
			   
			   //Condição de vitoria de tesoura sobre lagarto
			   else if(jogador == 3 && computador == 4 || computador == 3 && jogador == 4) {
			       if(jogador == 3) {
			       		printf("Computador escolheu LAGARTO");
			       		barra();
			        	printf("Tesoura decapita Lagarto, o jogador venceu!!");
			        	barra();
				   }
			       		
			       else{
			    		printf("Computador escolheu TESOURA");
			    		barra();
			        	printf("Tesoura decapita Lagarto, o computador venceu!!");
			        	barra();
				   }
				}
			   
			   //Condição de vitoria de lagarto sobre spock
			   else if(jogador == 4 && computador == 5 || computador == 4 && jogador == 5) {
			       if(jogador == 4) {
			       		printf("Computador escolheu SPOCK");
			       		barra();
			        	printf("Lagarto envena Spock, o jogador venceu!!");
			        	barra();
				   }
			       		
			       else {
			    		printf("Computador escolheu LAGARTO");
			    		barra();
			        	printf("Lagarto envena Spock, o computador venceu!!");
			        	barra();
				   }			    	
			   }
			   
			   //Condição de vitoria de lagarto sobre papel
			   else if(jogador == 4 && computador == 2 || computador == 4 && jogador == 2) {
			        if(jogador == 4) {
			        	printf("Computador escolheu PAPEL");
			        	barra();
			        	printf("Lagarto come Papel, o jogador venceu!!");
			        	barra();
					}
			        	
			        else {
			        	printf("Computador escolheu LAGARTO");
			        	barra();
			        	printf("Lagarto come Papel, o computador venceu!!");
			        	barra();
					}			        
			   }
			   
			   //Condição de vitoria de spock sobre tesoura
			   else if(jogador == 5 && computador == 3 || computador == 5 && jogador == 3) {
			       if(jogador == 5) {
			       		printf("Computador escolheu TESOURA");
			       		barra();
			        	printf("Spock esmaga Tesoura, o jogador venceu!!");
			        	barra();
				   }
			       		
			       else {
			    		printf("Computador escolheu SPOCK");
			    		barra();
			        	printf("Spock esmaga Tesoura, o computador venceu!!");
			        	barra();
				   }
			   }   
			   
			    //Condição de vitoria de spock sobre pedra
			    else if(jogador == 5 && computador == 1 || computador == 5 && jogador == 1) {
			        if(jogador == 5) {
			        	printf("Computador escolheu PEDRA");
			        	barra();
			        	printf("Spock vaporiza Pedra, o jogador venceu!!");
			        	barra();
					}
			        	
			        else {
			        	printf("Computador escolheu SPOCK");
			        	barra();
			        	printf("Spock vaporiza Pedra, o computador venceu!!");
			        	barra();
					}			        
			   }
			
				printf("\nDigite 's' para jogar novamente, ou tecle enter duas vezes para sair.\n");
		    		scanf("%s", &jogarNovamente);
		    		fflush(stdin);
				system("clear||cls");
		} 		while (jogarNovamente == 's' || jogarNovamente == 'S');	
	
	return 0;	
}

void barra(){
	printf("\n____________________________________\n\n");
}
