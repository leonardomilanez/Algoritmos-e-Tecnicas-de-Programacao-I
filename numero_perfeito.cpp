#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, somaDivisores, q, d;
	bool vf;
	
	q = 1;
	somaDivisores = 0;
	vf = false;
	d = 0;
	
	cout << "Insira um número: ";
	cin >> n;
	
	while(q < n){
		if(n % q == 0){
			d = q;
			cout << "O número " << d << " é divisor de " << n << endl;
			somaDivisores = somaDivisores + q;
		}
		q++;
	}
	cout << "A soma dos divisores do número é: " << somaDivisores << endl;
	
	if(somaDivisores == n){
		vf = true;
		cout << "É um número perfeito!";
	}
	
	else{
		cout << "Não é um número perfeito!";
	}
}
