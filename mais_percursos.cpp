#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o tamanho das dimensões da matriz (entre 3 e 16): \n";
	int n;
	cin >> n;
	
	int x[n][n], i = 0, j = 0, k = 0, soma = 0, somapares = 0, contpares = 0;
	bool flag = true;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << "Insira o elemento " << i << " da coluna " << j << ": \n";
			cin >> x[i][j];
		}
	}
	
	for(i = 0, j = 0; i < n; i++, j++){
		if(i != 0 && j % 2 == 0){
			k = i;
			while(k >= 0){
				if(x[k][j] < 0){
					flag = false;
				}
				k--;			
			} 
		}
		if(j == n-1 && flag == false){
			k = i;
			while(k >= 0){
				soma = soma + x[k][j];
				k--;
			}
		}
	}
	
	if(flag == true){
		for(i = 0, j = n-1; j >= 0; j--, i++){
			if(x[i][j] % 2 == 0){
				somapares = somapares + x[i][j];
				contpares++;
			}
		}		
		cout << "A média truncada dos elementos pares da diagonal segundária é: " << somapares/contpares;
	}
	else{
		cout << "A soma dos elementos da última coluna é: " << soma;
	}
}
