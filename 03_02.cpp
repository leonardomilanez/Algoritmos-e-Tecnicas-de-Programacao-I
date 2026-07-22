#include <iostream>
using namespace std;
int main(){
	int num1, num2;
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	if (num1 > num2){
		cout << "O maior numero e: " << num1;
	}
	if(num2 > num1){
		cout << "O maior numero e: " << num2;
	}
	if(num1 == num2){
		cout << "Definitivamente nao afeta o gremio";
	}
return 0;
}
