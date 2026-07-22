#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o número (par) de linhas e colunas da matriz: \n";
	int n;
	cin >> n;
	
	if(n % 2 != 0){
		return 0;
	}
	
	int x[n][n], y[n][n], i = 0, j = 0, subtracao = 0;

	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << "Insira o elemento da linha " << i << " e da coluna " << j << endl; 
			cin >> x[i][j];
		}
	}
	
	for(i = 0; i < (n/2); i++){
		for(j = 0; j < (n/2); j++){
			if(j == 0){
				while(i < (n/2)-1 && j < (n/2)-1){
					subtracao = subtracao + x[i][j]*x[i+1][j+1];
					i++;
					j++;
				}
				i = 0;
				j = 0;
			}
			if(j == (n/2) - 1){
				while(i < (n/2)-1 && j > 0){
					subtracao = subtracao - x[i][j]*x[i+1][j-1];
					i++;
					j--;
				}
				j = (n/2) - 1;
				i = 0;
			}
		}
		j = 0;
		y[i][j] = subtracao;
		subtracao = 0;
		break;	
	}
	
	for(i = 0; i < (n/2); i++){
		for(j = (n/2); j < n; j++){
			if(j == (n/2)){
				while(i < (n/2)-1 && j < n-1){
					subtracao = subtracao + x[i][j]*x[i+1][j+1];
					i++;
					j++;
				}
				j = (n/2);
				i = 0;
			}
			if(j == n-1){
				while(i < (n/2)-1 && j > (n/2)){
					subtracao = subtracao - x[i][j]*x[i+1][j-1];
					i++;
					j--;
				}
				j = n-1;
				i = 0;
			}
		}
		j = 1;
		y[i][j] = subtracao;
		subtracao = 0; 
		break;
	}
	
	for(i = (n/2); i < n; i++){
		for(j = 0; j < (n/2); j++){
			if(j == 0){
				while(i < n-1 && j < (n/2)-1){
					subtracao = subtracao + x[i][j]*x[i+1][j+1];
					i++;
					j++;
				}
				i = (n/2);
				j = 0;
			}
			if(j == (n/2)-1){
				while(i < n-1 && j > 0){
					subtracao = subtracao - x[i][j]*x[i+1][j-1];
					i++;
					j--;
				}
				i = (n/2);
				j = (n/2)-1;
			}
		}
		j = 0;
		i = 1;
		y[i][j] = subtracao;
		subtracao = 0;
		break;
	}
	
	for(i = (n/2); i < n; i++){
		for(j = (n/2); j < n; j++){
			if(j == (n/2)){
				while(i < n-1 && j < n-1){
					subtracao = subtracao + x[i][j]*x[i+1][j+1];
					i++;
					j++;
				}
				i = (n/2);
				j = (n/2);	                                                    
			}
			if(j == n-1){
				while(i < n-1 && j > (n/2)){
					subtracao = subtracao - x[i][j]*x[i+1][j-1];
					i++;
					j--;
				}
				i = (n/2);
				j = n-1;
			}
		}
		i = 1;
		j = 1;
		y[i][j] = subtracao;
		break;
	}
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			cout << y[i][j] << "\t";
		}
		cout << endl;
	}
}
