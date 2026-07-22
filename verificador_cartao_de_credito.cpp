#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, i, soma;
	
	i = 1;
	soma = 0;
	
	while(i <= 16){
		
		cout << "Insira, um a um, o número do cartão de crédito: ";
		cin >> n;
		
		if(i % 2 != 0){
			n = n*2;
			if(n > 9){
				n = n - 9;
			}
		}
		soma = soma + n;
		i++;
	}
	if(soma % 10 == 0){
		cout << "Número válido!";
	}
	else{
		cout << "Número inválido!";
	}
}
