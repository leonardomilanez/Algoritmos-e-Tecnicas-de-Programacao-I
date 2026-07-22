#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o número de elementos do array: ";
	int n;
	cin >> n;
	
	int x[n], i = 0, y[1024], cont = 0;
	
	for(i = 0; i < n; i++){
		cout << "Insira um elemento: \n";
		cin >> x[i];
	}
	
	for(i = 0; i < n; i++){
		y[cont] = x[i];
		cont++;
		if(x[i] - x[i+1] == 2 || x[i] - x[i+1] == -2){
			y[cont] = (x[i] + x[i+1])/2;
			cont++;
		}
		if((x[i] > 0 && x[i+1] < 0) || (x[i] < 0 && x[i+1] > 0) && !(x[i] - x[i+1] == 2 || x[i] - x[i+1] == -2)){
			y[cont] = 0;
			cont++;	
		}
	}
	
	for(i = 0; i < cont; i++){
		cout << y[i] << "\t";
	}
}
