#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o número de linhas da matriz: \n";
	int nlinhas;
	cin >> nlinhas;
	
	cout << "Insira o número de colunas da matriz: \n";
	int ncolunas;
	cin >> ncolunas;
	
	int x[nlinhas][ncolunas], y[nlinhas][ncolunas], i = 0, j = 0, maiorElemento = 0, k = 0, indice;
	
	
	for(i = 0; i < nlinhas; i++){
		for(j = 0; j == ncolunas; j++){
			x[i][j] = 0;
		}
	}
	
	for(i = 0; i < nlinhas; i++){
		for(j = 0; j < ncolunas; j++){
			cout << "Insira um elemento da linha " << i << " coluna " << j << endl;
			cin >> x[i][j];
		}
	}
	
	for(i = 0; i < nlinhas; i++){
		for(k = 0; k == ncolunas; k++){
			y[i][k] = 0;
		}
	}
	
	j = 0;
	k = 0;
	
	for(i = 0; i < nlinhas; i++){
		
		for(j = 0; j < ncolunas; j++){
			if(maiorElemento < x[i][j]){
				maiorElemento = x[i][j];
				indice = j;
			}
		}
		
		j = indice;

		for(k = 0; k < 3; k++){
			if(k == 0 && ((ncolunas - 1) - j ) == 1){
				y[i][k] = x[i][j];
				y[i][k + 1] = x[i][j+1];
				y[i][k + 2] = 0;
			}
			if(k == 0 && ((ncolunas - 1) - j ) == 0){
				y[i][k] = x[i][j];
				y[i][k + 1] = 0;
				y[i][k + 2] = 0;
			}
			if(k == 0 && ((ncolunas - 1) - j ) > 1){
				y[i][k] = x[i][j];
			}
			if(k == 1 && ((ncolunas - 1) - j ) > 1){
				y[i][k] = x[i][j + 1];
			}
			if(k == 2 && ((ncolunas - 1) - j ) > 1){
				y [i][k] = x[i][j + 2];
			}
		}
		
		j = 0;
		maiorElemento = 0;
		k = 0;
				
	}	
	for(i = 0; i < nlinhas; i++){
		for(k = 0; k < 3; k++){
			cout << y[i][k] << "\t";
		}
		cout << endl;
	}
	
}
