#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int unidades(int n){
	while(n >= 10){
		n = n - 10;
	}
	n = pow(n, 3);
	return n;
}

int dezenas(int n){
	if(n < 10){
		n = 0;
	}
	if(n >= 10 && n < 100){
		n = n/10;
		n = pow(n, 3);
	}
	if(n >= 100){
		while(n >= 100){
			n = n - 100;
		}
		n = n/10;
		n = pow(n, 3);
	}
	return n;
}
int centenas(int n){
	if(n < 100){
		n = 0;
	}
	else{
		n = n/100;
		n = pow(n, 3);
	}
	return n;
}

bool armstrong(int n){
	int soma;
	bool m;
	soma = centenas(n) + dezenas(n) + unidades(n);
	if(soma == n){
		m = true;
	}
	else{
		m = false;
	}
	return m;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n;
	cout << "Insira um número entre 1 e 999: ";
	cin >> n;
	if(armstrong(n) == true){
		cout << "É um número de Armstrong!";
	}
	else{
		cout << "Não é um número de Armstrong!";
	}
}
