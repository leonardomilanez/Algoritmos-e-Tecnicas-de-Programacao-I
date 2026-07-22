#include <iostream>
#include <locale.h>
using namespace std;
int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia1, dia2, mes1, mes2, ano1, ano2;
	cout << "Insira o primeiro dia: ";
	cin >> dia1;
	cout << "Insira o segundo dia: ";
	cin >> dia2;
	cout << "Insira o primeiro mês: ";
	cin >> mes1;
	cout << "Insira o segundo mês: ";
	cin >> mes2;
	cout << "Insira o primeiro ano: ";
	cin >> ano1;
	cout << "Insira o segundo ano: ";
	cin >> ano2;
	if(ano1 > ano2)
		cout << dia1 << "/" << mes1 << "/" << ano1;
	if(ano2 > ano1)
		cout << dia2 << "/" << mes2 << "/" << ano2;
	if(ano1 == ano2){
		if(mes1 > mes2)
			cout << dia1 << "/" << mes1 << "/" << ano1;
		if(mes2 > mes1)
			cout << dia2 << "/" << mes2 << "/" << ano2;
		if(mes1 == mes2){
			if(dia1 > dia2)
				cout << dia1 << "/" << mes1 << "/" << ano1;
			if(dia2 > dia1)
				cout << dia2 << "/" << mes2 << "/" << ano2;
			if(dia1 == dia2)
				cout << "Os dias são iguais.";
		}
	}
return 0;
}
