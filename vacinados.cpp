#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

struct pessoa{
	char nome;
	int idade;
	char vacinado;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	struct pessoa cidadaos[1024];
	
	int i = 0, conti = 0;
	char sai;
	
	for(i = 0; i < 1024; i++){
		printf("Fim? \n");
		scanf(" %c", &sai);
		
		if(sai == 'S' || sai == 's'){
			break;
		}
		else{
			conti++;
			
			printf("Insira o nome da pessoa, sua idade e se foi vacinada (s/n):\n");
			scanf(" %c %d %c", &cidadaos[i].nome, &cidadaos[i].idade, &cidadaos[i].vacinado);
		}	
	}
	
	for(i = 0; i < conti; i++){
		printf(" %c \n %d \n %c", cidadaos[i].nome, cidadaos[i].idade, cidadaos[i].vacinado);
	}
}
