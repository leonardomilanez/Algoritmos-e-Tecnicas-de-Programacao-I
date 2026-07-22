#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	cout << "Insira o tamanho dos arrays: \n";
	int n;
	cin >> n;
	
	int x[2*n-2], y[2*n-2], z[2*n-1], i = 0, j = (2*n)-2, k = 0;
	
	for(i = 0; i < (2*n-1); i++){
		x[i] = 0;
	}
	
	for(i = 0; i < (2*n-1); i++){
		y[i] = 0;
	}
	
	for(i = 0; i < (2*n); i++){
		z[i] = 0;
	}
	
	for(i = 0; i < n; i++){
		cout << "Insira um elemento para o primeiro array: \n";
		cin >> x[i];
	}
	
	for(j; j > 0; j--){
		cout << "Insira um elemento para o segundo array: \n";
		cin >> y[j];
	}
	
	for(k = 0; k < 2*n; k++){
		for(i =  0, j = 0; i < (2*n)-1; i++, j++){
			z[k] = z[k] + x[i]*y[j];			
		}
		for(j = 0; j < (2*n-1); j++){
			y[j] = y[j+1];
			if(j == (2*n)-2){
				y[j] = 0;
			}
		}
	}
	
	for(k = 0; k < 2*n-1; k++){
		cout << z[k] << "\t";
	}
}
