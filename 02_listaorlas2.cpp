#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	cout << "Digite o primeiro lado: ";
	cin >> lado1;
	cout << "Digite o segundo lado: ";
	cin >> lado2;
	cout << "Digite o terceiro lado: ";
	cin >> lado3;
	if(lado1 == lado2 && lado2 == lado3)
		cout << "Isso é um triângulo equilátero.";
	if(lado1 == lado2 || lado2 == lado3){
		if(lado1 > (lado2 + lado3) || lado2 > (lado1 + lado3) || lado3 > (lado1 + lado2))
			cout << "Isso não forma um triângulo.";
		else
			cout << "Isso é um triângulo isósceles.";	
	}
	if(lado1 != lado2 && lado2 != lado3){
		if(lado1 > (lado2 + lado3) || lado2 > (lado1 + lado3) || lado3 > (lado1 + lado2))
			cout << "Isso não forma um triângulo.";
		else
			cout << "Isso é um triângulo escaleno.";	
	}
return 0;
}
