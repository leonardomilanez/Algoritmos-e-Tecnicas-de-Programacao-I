#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

struct estrela{
	int codigo;
	float luz;
	char cor;
};

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira um número de estrelas: ";
	int n;
	cin >> n;
	
	struct estrela estrelas[n];
	
	int i = 0, view = 0;
	
	for(i = 0; i < n; i++){
		
		printf("Insira o código da estrela: ");
		scanf(" %d", &estrelas[i].codigo);
		
		printf("\n Insira a intensidade da luz do código: ");
		scanf(" %f", &estrelas[i].luz);
		
		printf("\n Insira a cor da estrela: ");
		scanf(" %c", &estrelas[i].cor);
	}
	
	printf("Qual estrela 0 < n < %d  você gostaria de ver? \n", n);
	scanf(" %d", &view);
	
	printf(" %d \t %e \t %c \n", estrelas[view].codigo, estrelas[view].luz, estrelas[view].cor);
}
