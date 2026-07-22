#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Informe no número de elementos da sequência: \n";
	int n;
	cin >> n;
	int x[n];
	int i = 0;
	
	for(i; i < n; i++){
		cout << "Informe um elemento: ";
		cin >> x[i];
	}
	
	i = 0;
	
	while(i < n){
		cout << i;
		i = x[i];
		if(x[i] == 0){
			cout << i;
			break;
		}
	}
}
