#include <iostream>
#include <locale>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

	setlocale(LC_ALL, "Portuguese");

	int tam;
	int bombas;
	
	cout << "Insira o tamanho do campo minado: ";
	cin >> tam;
	cout << "Insira o número de bombas: ";
	cin >> bombas;
	
	int x[tam][tam];
	
	int i, j;
	
	int k, l;
	
	for(i = 0; i < tam; i ++){
		srand(time(NULL));
		k = rand() % (tam + 1);
		for(j = 0; j < tam; j++){
			srand(time(NULL));
			l = rand() % (tam + 1);
			if( k == 0 || l == 0 || k == tam || l == tam){
				break;
			}
			if(x[k - 1][l - 1] == 0 && x[k - 1][l] == 0 && x[k - 1][l + 1] == 0 && x[k][l - 1] == 0 && x[k][l + 1] == 0 && x[k + 1][l - 1] == 0 && x[k + 1][l] == 0 && x[i + 1][j + 1] == 0){
				x[k - 1][l-1] = x[k][l];
				break;
			}
			x[k][l] = 0;
			bombas--;
			if(bombas == 0){
				break;
			}
		}
		if(bombas == 0){
			break;
		}
	}
	
	int contBomba = 0;
	
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++){
			if(x[i - 1][j - 1] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if(x[i - 1][j] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if(x[i - 1][j + 1] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if(x[i][j - 1] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if( x[i][j + 1] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if(x[i + 1][j - 1] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if(x[i + 1][j] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			if(x[i + 1][j + 1] == 0){
				contBomba = contBomba + 1;
				x[i][j] = contBomba;
			}
			contBomba = 0;
			if(!(x[i - 1][j - 1] == 0) && !(x[i - 1][j] == 0) && !(x[i - 1][j + 1] == 0) && !(x[i][j - 1] == 0) && !(x[i][j + 1] == 0) && !(x[i + 1][j - 1] == 0) && !(x[i + 1][j] == 0) && !(x[i + 1][j + 1] == 0)){
				x[i][j] = 8;
			}
		}
	}
	for(i = 0; i < tam; i++){
		for(j = 0; j < tam; j++){
			if(x[i][j] == 8){
				cout << " \t";
			}
			else{
				cout << x[i][j] << "\t";
			}
		}
		cout << endl;
	}	
}
