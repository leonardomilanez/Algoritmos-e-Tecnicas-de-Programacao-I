#include <iostream>
using namespace std;
int main(){
	int x, y, z;
	cout << "Insira seu salario: ";
	cin >> x;
	cout << "Insira a quantidade total de suas vendas: ";
	cin >> y;
	z = (x + 1.04*(y));
	cout << "Voce recebera: " << z;
return 0;
}
