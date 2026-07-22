#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

void bubbleSort(int z[], int m){
	
	int i, j;
	
	for(i = 0; i < m-1; i++){
		for(j = 0; j < m-i-1; j++){
			if(z[j] > z[j+1]){
				swap(z[j], z[j+1]);
			}
		}
	}
}

int main(){
	
	cout << "Insira o tamanho dos arrays: ";
	int n;
	cin >> n;
	
	int x[n], y[n], z[2*n], m = 2*n, i = 0, j = 0;
	
	for(i = 0; i < n; i++){
		cout << "Insira um elemento para o primeiro array: \n";
		cin >> x[i];
	}
	
	for(i = 0; i < n; i++){
		cout << "Insira um elemento para o segundo array: \n";
		cin >> y[i];
	}
	
	for(i = 0; i < n; i++){
		z[i] = x[i];
	}
	
	for(i, j = 0; i < (2*n)-1; i++, j++){
		z[i] = y[j];
	}
	
	bubbleSort(z, m);
	
	for(i = 0; i < n; i++){
		cout << z[i] << "\t";
	}
}
