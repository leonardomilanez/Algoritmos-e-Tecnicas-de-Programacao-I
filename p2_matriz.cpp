#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n = 7;
	
	int x[n][n], i = 0, j = 0, soma1 = 0, soma2 = 0;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			cout << "Insira um elemento para a linha " << i << " e coluna " << j << ": ";
			cin >> x[i][j];
		}
	}
	
	for (i = 0, j = 0; i < n; i++, j++){
		soma1 = soma1 + x[i][j];
	}
	
	for(i = 0, j; i < n; i++, j--){
		soma2 = soma2 + x[i][j];
	}
	
	if(soma1 - soma2 == 0){
		cout << "As diagonais da matriz são iguais!";
	}
	if(soma1 - soma2 > 0){
		cout << "A diagonal principal é maior!";
	}
	if(soma1 - soma2 < 0){
		cout << "A diagonal secundária é maior!";
	}
}
