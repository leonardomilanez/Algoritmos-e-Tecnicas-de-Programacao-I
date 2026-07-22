#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o tamanho do array: \n";
	int n;
	cin >> n;
	
	if(n > 1024){
		cout << "Vá a merda!";
		return 0;
	}
	
	int x[n], y[n], i = 0, conti = 1, j = 0;
	
	for(i = 0; i < n; i++){
		cout << "Insira um elemento para o array: ";
		cin >> x[i];
	}
	
	for(i = 0; i < n; i++){
		
		if(i == 0 && x[i] > x[i+1]){
			y[j] = x[i];
			j++;
			conti++;
		}
		
		if(i != 0 && i != n-1 && x[i] > x[i+1] && x[i] > x[i-1]){
			y[j] = x[i];
			j++;
			conti++;
		}
		
		if(i == n-1 && x[i] > x[i-1]){
			y[j] = x[i];
			j++;
			conti++;
		}
	}
	
	for(j = 0; j < conti; j++){
		cout << y[j] << "\t";
	}
	
}
