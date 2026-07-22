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
	
	for(int i=0; i < n; i++){
		
		cout << "Insira a absissa do par ordenado: ";
		cin >> x[i];
		cout << "Insira a ordenada do par ordenado: ";
		cin >> y[i];
		
	}
	
	bool rel = true, trans;
	
	for(int i=0; i < n; i++){
		
		for(int j=0; j < n; j++){
			if(y[i] == x[j]){
				if((x[i] && y[j] ) == (x[i] && y[i])){
					trans = true;
				}
			}
		}
		if(trans == false){
			rel = false;
		}
		trans = false;
	}
	if(rel == true){
		cout << "É trans!!!!!! Sobre isse \n";
	}
	else{
		cout << "Não é trans grrr";
	}
}
