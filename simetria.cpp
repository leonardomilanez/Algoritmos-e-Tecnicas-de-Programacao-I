#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){

	setlocale(LC_ALL, "Portuguese");
	
	cout << "Quantos elementos há na relação? \n";
	int n;
	cin >> n;
	
	int x[n];
	int y[n];
	
	for(int i=0; i<n; i++){
		cout << "Insira a absissa do par ordenado: \n";
		cin >> x[i];
		cout << "Insira a ordenada do par ordenado: \n";
		cin >> y[i];
	}
	
	bool rel = true, sim;
	
	for(int i=0; i<n; i++){
	
		for(int j = 0; j < n; j++){
			if(x[i] == y[j] && y[i] == x[j]){
				sim = true;
				break;
			}
		}
		if(sim == false){
			rel = false;
		}
		sim = false;
	}
	if(rel == true){
		cout << "É simétrica!";
	}
	else{
		cout << "Não é simétrica!";
	}
}
