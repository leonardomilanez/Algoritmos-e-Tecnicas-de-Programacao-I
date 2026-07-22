#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int x[1024];
	int soma;
	
	for(int i = 1; i < 17; i++){
		cout << "Insira, um a um, os números do cartão: ";
		cin >> x[i];
		
		if(i % 2 != 0){
			x[i] = x[i]*2;
			if(x[i] > 9){
				x[i] = x[i] - 9;
			}
		}
		
		soma = soma + x[i];	
	}
	
	if(soma % 10 == 0){
		cout << "\n O número do cartão é válido!";
	}
	else{
		cout << "\n O número do cartão é inválido!";
	}
}
