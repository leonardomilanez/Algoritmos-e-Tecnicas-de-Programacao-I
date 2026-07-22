#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int codigoOperadora, codigoPais, dadosConsumidos, valorPago,
	notaSubjetiva, i, somaDados, melhorPais, melhorOperadora, numPais;
	float relacao, contOpruim, somaOpruim,  melhorRelacao;
	
	i = 0;
	contOpruim = 0;
	somaDados = 0;
	melhorRelacao = 0;  
	relacao = 0;
	somaOpruim = 0;
	
	cout << "Quantos países você visitou? \n";
	cin >> 	numPais;
	
	while(i < numPais){
		
		cout << "Qual o código da operadora? \n";
		cin >> codigoOperadora;
		cout << "Qual o código do país? \n";
		cin >> codigoPais;
		cout << "Quantos GBs de internet você usou? \n";
		cin >> dadosConsumidos;
		cout << "Quanto você pagou? (em USD) \n";
		cin >> valorPago;
		cout << "Que nota você daria pelo serviço? \n";
		cin >> notaSubjetiva;
		
		somaDados = somaDados + dadosConsumidos;
		
		relacao = dadosConsumidos / valorPago;
		
		if(melhorRelacao == 0 || melhorRelacao < relacao){
			melhorRelacao = relacao;
			melhorOperadora = codigoOperadora;
			melhorPais = codigoPais;			
		}
		
		if(notaSubjetiva <= 3){
			somaOpruim = somaOpruim + valorPago;
			contOpruim++;
		}
		
		i++;
	}
	
	cout << "O total de GBs consumidos foi: " << somaDados << endl;
	cout << "A operadora com a melhor relação volume de dados/preço foram: " << melhorOperadora << melhorPais << endl;
	cout << "A média de gastos com operadoras com serviço ruim foi: " << somaOpruim/contOpruim;
}
