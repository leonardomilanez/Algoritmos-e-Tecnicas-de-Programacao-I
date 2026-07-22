#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o tamanho do array: \n";
	int n;
	cin >> n;
	int x[n];
	
	for(int i = 0; i < n; i++){
		cout << "Insira um número inteiro: \n";
		cin >> x[i];
	}
	
	for(int i = 0; i < n; i++){
		if(x[i] > x[i-1] && x[i] > x[i+1]){
			cout << "," << x[i];
		}	
	}
}
