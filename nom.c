//nome: estefanio miko engonga bindang 
//matricula:21.2.9997

#include <stdio.h>
#include <string.h>
int main() {
	int o = 0;
	int contador=0;
	char nome_completo[70];
	// printf("digite o nome completo: ");
	fgets(nome_completo,70,stdin);
	nome_completo[strlen(nome_completo) - 2] = '\0';
	for(int i=0; nome_completo[i] != '\0'; i++){
		if(nome_completo[i] == ' '){
			o = i + 1;
		}
	}

	char ult_nome[15];
	for(int i = o, j = 0; nome_completo[i - 1] != '\0'; i++, j++){
		ult_nome[j] = nome_completo[i];
	}
	printf("%s, ", ult_nome);

	for(int i = 0; i < o - 1; i++)
		printf("%c", nome_completo[i]);
	
	printf("\n");
    printf("Total de letras: %d\n", (int) strlen(nome_completo) - contador);
	printf("Total de letras do último sobrenome: %d\n", (int) strlen(ult_nome));
	for(int i = 0; nome_completo[i] != '\0'; i++){
		if(nome_completo[i]== ' '){
			contador++;
		}

	}
	
	





	return 0;
}