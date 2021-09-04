char *devolverOpcao(int escolha){
    char palavra[10];
    char *opcao = palavra;
    switch(escolha){
        case 1:
            strcpy(palavra, "PEDRA");
            break;
		case 2:
			strcpy(palavra, "PAPEL");
			break;
		case 3:
			strcpy(palavra, "TESOURA");
			break;
		case 4:
			strcpy(palavra, "LAGARTO");
			break;
		case 5:
			strcpy(palavra, "SPOCK");
			break;
		default:
			strcpy(palavra, "INVALIDO");
    }
}

char *devolverAcao(int opcUsuario, int opcComputador){
    char palavra[10];
    char *opcao = palavra;
    int resultado = resultadoJogo(opcUsuario, opcComputador);

    switch(resultado){
        case 1:
			strcpy(palavra, "quebra");
			break;
		case 2:
			strcpy(palavra, "quebra");
			break;
		case 3:
			strcpy(palavra, "cobre");
			break;
		case 4:
			strcpy(palavra, "desmente");
			break;
		case 5:
			strcpy(palavra, "corta");
			break;
		case 6:
			strcpy(palavra, "decapita");
			break;
		case 7:
			strcpy(palavra, "come");
			break;
		case 8:
			strcpy(palavra, "envenena");
			break;
		case 9:
			strcpy(palavra, "esmaga");
			break;
		case 10:
			strcpy(palavra, "vaporiza");
			break;		
	}
	return opcao;
}

void barra(){
	printf("\n____________________________________\n\n");
}

void limpaTela(){
	system("clear||cls");
}

int resultadoJogo(int opcUsuario, int opcComputador){
	int tipoEmbate = 0;
	if ((opcUsuario == 1) && (opcComputador == 3)) {
		tipoEmbate = 1;//PedraVenceTesoura
	} else if ((opcUsuario == 1) && (opcComputador == 4)) {
		tipoEmbate = 2;//pedraVenceLagarto
	} else if ((opcUsuario == 2) && (opcComputador == 1)) {
		tipoEmbate = 3;//papelVencePedra
	} else if ((opcUsuario == 2) && (opcComputador == 5)) {
		tipoEmbate = 4;//papelVenceSpock
	} else if ((opcUsuario == 3) && (opcComputador == 2)) {
		tipoEmbate = 5;//tesouraVencePapel
	} else if ((opcUsuario == 3) && (opcComputador == 4)) {
		tipoEmbate = 6;//tesouraVenceLagarto
	} else if ((opcUsuario == 4) && (opcComputador == 2)) {
		tipoEmbate = 7;//lagartoVencePapel
	} else if ((opcUsuario == 4) && (opcComputador == 5)) {
		tipoEmbate = 8;//lagartoVenceSpock
	} else if ((opcUsuario == 5) && (opcComputador == 1)) {
		tipoEmbate = 9;//spockVenceTesoura
	} else if ((opcUsuario == 5) && (opcComputador == 3)) {
		tipoEmbate = 10;//spockVencePedra
	}
	return tipoEmbate;
}