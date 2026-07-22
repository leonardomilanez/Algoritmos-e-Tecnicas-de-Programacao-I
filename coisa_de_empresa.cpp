#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char cargo;
	float salario, mediaVendedores, menorTempo, menorEstoque;
	int tempoEmpresa, maiorTempo, i, contVendedores;
	bool vf;
	
	i = 0;
	maiorTempo = 0;
	contVendedores = 0;
	menorTempo = 0;
	menorEstoque = 0;
	vf = true;
	
	while(i<5){
		
		cout << "Insira o cargo: \n";
		cin >> cargo;
		cout << "insira o salário: \n";
		cin >> salario;
		cout << "Insira o tempo de empresa (em anos)): \n";
		cin >> tempoEmpresa;
	
		switch(cargo){
			case 'V':
				salario = salario + (salario*(0.005))*tempoEmpresa;
				mediaVendedores = mediaVendedores + salario;
				contVendedores++;
				break;
			case 'C':
				salario = (salario+2000);
				if(tempoEmpresa <= 10){
					vf = false;
				}			
				break;
			case 'E':
				salario = salario + ((salario/10)*(tempoEmpresa/5));
				if(menorTempo == 0 || tempoEmpresa < menorTempo){
					menorTempo = tempoEmpresa;
				}
				if(tempoEmpresa == menorTempo){
					menorEstoque = salario;
				}
				break;			
		}
		cout << "O salário do funcionário em questão é: " << salario << "BRL. \n";
		if(tempoEmpresa > maiorTempo){
			maiorTempo = tempoEmpresa;
		}
		i++;
	}
	cout << "O maior tempo de empresa de um funcionário é: " << maiorTempo << endl;
	cout << "A média salarial dos vendedores é: " << mediaVendedores << "BRL. \n";
	cout << "O salário do funcionário de estoque com menos tempo de empresa é: " << menorEstoque << "BRL. \n";
	if(vf == false){
		cout << "Nem todos os chefes têm mais de 10 anos trabalhando na empresa.";
	}
	else{
		cout << "Todos os chefes têm mais de 10 anos trabalhando na empresa";
	}
}
