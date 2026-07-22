#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o tamanho dos arrays: \n";
	int n;
	cin >> n;
	
	int x[n], y[n], z[2*n], i = 0, j = 0;
	
	for(i = 0; i < n; i++){
		cout << "Insira um elemento para o primeiro array: \n";
		cin >> x[i];
		cout << "Insira um elemento para o segundo array: \n";
		cin >> y[i];
	}
	
	for(i = 0; i < n; i++){
		z[i] = x[i];
	}
	
	for(i; i < 2*n; i++){
		z[i] = y[i];
	}
	for(i = 0, j = 0; i < n; i++, j++){
		if(x[i] < z[j]){
			z[j] = x[i];
		}	
	}
	
	for(i = 0, j; i < n; i++, j++){
		if(y[i] < z[j]){
			z[j] = y[i];
		}
	}
	
	for(j = 0; j < 2*n; j++){
		cout << z[j] << "\t";
	}		 
}
