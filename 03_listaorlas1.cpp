#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int codigoProduto, codigoPais;
	float pesoKilo, pesoGrama, preco, imposto, valorTotal;
	
	cout << "Insira o código do seu produto: ";
	cin >> codigoProduto;
	cout << "Insira o código do país de origem do seu produto: ";
	cin >> codigoPais;
	cout << "Insira o peso do seu produto: ";
	cin >> pesoKilo;
	
	pesoGrama = 1000*(pesoKilo);
	
	if(codigoPais == 1){
		if(codigoProduto <= 4){
			preco = pesoGrama*(10);
			cout << "O produto pesa: " << pesoGrama << "G, e custa: " << preco << "BRL";
		}
		if(codigoProduto > 4 && codigoProduto <= 7){
			preco = pesoGrama*(25);
			cout << "O produto pesa: " << pesoGrama << "G, e custa: " << preco << "BRL";
		}
		if(codigoProduto > 7 && codigoProduto <=10){
			preco = pesoGrama*(35);
			cout << "O produto pesa: " << pesoGrama << "G, e custa: " << preco << "BRL";
		}
	}
	
	if(codigoPais == 2){	
		imposto = 1.15;
		if(codigoProduto <= 4){
			preco = (pesoGrama*(10));
			valorTotal = preco*imposto;
			imposto = preco*(0.15);
			cout << "O produto pesa: " << pesoGrama << "G, é precificado em: " << preco << "BRL, foi taxado em: " << imposto << "BRL, e custa: " << valorTotal;
		}
		if(codigoProduto > 4 && codigoProduto <= 7){
			preco = (pesoGrama*(25));
			valorTotal = preco*imposto;
			imposto = preco*(0.15);
			cout << "O produto pesa: " << pesoGrama << "G, é precificado em: " << preco << "BRL, foi taxado em: " << imposto << "BRL, e custa: " << valorTotal;
		}
		if(codigoProduto > 7 && codigoProduto <=10){
			preco = (pesoGrama*(35));
			valorTotal = preco*imposto;
			imposto = preco*(0.15);
			cout << "O produto pesa: " << pesoGrama << "G, é precificado em: " << preco << "BRL, foi taxado em: " << imposto << "BRL, e custa: " << valorTotal;
		}
	}
	
	if(codigoPais == 3){
		imposto = 1.25;
		if(codigoProduto <=4){
			preco = (pesoGrama*(10));
			valorTotal = preco*imposto;
			imposto = preco*(0.25);
			cout << "O produto pesa: " << pesoGrama << "G, é precificado em: " << preco << "BRL, foi taxado em: " << imposto << "BRL, e custa: " << valorTotal;
		}
		if(codigoProduto > 4 && codigoProduto <= 7){
			preco = (pesoGrama*(25));
			valorTotal = preco*imposto;
			imposto = preco*(0.25);
			cout << "O produto pesa: " << pesoGrama << "G, é precificado em: " << preco << "BRL, foi taxado em: " << imposto << "BRL, e custa: " << valorTotal;
		}
		if(codigoProduto > 7 && codigoProduto <=10){
			preco = (pesoGrama*(35));
			valorTotal = preco*imposto;
			imposto = preco*(0.25);
			cout << "O produto pesa: " << pesoGrama << "G, é precificado em: " << preco << "BRL, foi taxado em: " << imposto << "BRL, e custa: " << valorTotal;
		}
	}
	
	if(codigoPais > 3 || codigoProduto > 10){
		cout << "Dados incorretamente inseridos!";
	}

return 0;

}
