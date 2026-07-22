#include <iostream>
using namespace std;
int main(){
	int num1, num2, num3;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "Digite o terceiro numero: ";
	cin >> num3;
	if(num1 > num2 > num3){
		cout << num1 << num2 << num3;
	}
	if(num2 > num3 > num1){
		cout << num2 << num3 << num1;
	}
	if(num3 > num1 > num2){
		cout << num3 << num1 << num2;
	}
	if(num2 > num1 > num3){
		cout << num2 << num1 << num3;
	}
	if(num1 > num3 > num2){
		cout << num1 << num3 << num2;
	}
	if(num3 > num2 > num1){
		cout << num3 << num2 << num1;
	}
	else{
		cout << "Os numeros sao iguais.";
	}
return 0;
}
