#include <iostream>
#include <locale.h>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int nA, nB, nC, cont;
	
	cout << "Insira o primeiro número: ";
	cin >> nA;
	cout << "Insira o segundo número: ";
	cin >> nB;
	cout << "Insira o terceiro número: ";
	cin >> nC;
	
	cont = 1;
	
	while(nA % 2 == 0 || nB % 2 == 0 || nC % 2 == 0){
		if(nA % 2 == 0){
			nA = nA/2;
		}
		if(nB % 2 == 0){
			nB = nB/2; 
		}
		if(nC % 2 == 0){
			nC = nC/2;
		}
		cont = cont*2;
	}
	
	while(nA % 3 == 0 || nB % 3 == 0 || nC % 3 == 0){
		if(nA % 3 == 0){
			nA = nA/3;
		}
		if(nB % 3 == 0){
			nB = nB/3; 
		}
		if(nC % 3 == 0){
			nC = nC/3;
		}
		cont = cont*3;
	}
	
	while(nA % 7 == 0 || nB % 7 == 0 || nC % 7 == 0){
		if(nA % 7 == 0){
			nA = nA/7;
		}
		if(nB % 7 == 0){
			nB = nB/7; 
		}
		if(nC % 7 == 0){
			nC = nC/7;
		}
		cont = cont*7;
	}
	
	while(nA % 11 == 0 || nB % 11 == 0 || nC % 11 == 0){
		if(nA % 11 == 0){
			nA = nA/11;
		}
		if(nB % 11 == 0){
			nB = nB/11; 
		}
		if(nC % 11 == 0){
			nC = nC/11;
		}
		cont = cont*11;
	}
	
	cout << "O m.m.c é: " << cont; 

}
