#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o tamanho dos arrays: \n";
	int n;
	cin >> n;
	
	int i = 0, l = 0, k = (2*n)-2, j = (2*n) - 2, x[(2*n)-1], y[(2*n)-1], z[(2*n)-1], conti = 0, contj = 0, soma = 0;
	
	for(i = 0; i < (2*n) - 1; i++){
		x[i] = 0;
	}
	
	for(i = 0; i < n; i++){
		cout << "Insira o elemento do primeiro array: \n";
		cin >> x[i];
	}
	
	for(i = 0; i < (2*n) - 1; i++){
		y[i] = 0;
	}
		
	for(i = 0; i < n; i++){
		cout << "Insira o elemento do segundo array: \n";
		cin >> y[i];
	}
	
	for(i = 0; i < (2*n) - 1; i++){
		z[i] = 0;
	}
	
	for(i = 0; i < (2*n) - 1; i++){		
		for(j; j >= 0; j--){
			contj = j;
			soma = soma + x[i]*y[j];
			if(contj == 0){
				z[l] = soma;
				l++;
				soma = 0;
				for(k; k >= 0; k--){
					if(k == 0){
						y[k] = 0;
						break;
					}
					y[k] = y[k-1];
				}
				break;
			}
			break;
		}
		j--;
		if(j < 0){
			j = (2*n) - 2;
			k = j;
		}
		if(i == (2*n)-2){
			i = -1;
		}
		conti++;
		if(conti == ((2*n) - 1)*((2*n) - 1)){
			break;
		}
	}
	
	for(l = 0; l < (2*n)-1; l++){
		cout << z[l] << "\t";
	}
} 


