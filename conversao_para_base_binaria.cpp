#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira um número a ser convertido à base binária: \n";
	int nbase;
	cin >> nbase;
	int conti = -1;
	int x[1024];		
	
	for (int i = 0; nbase > 0; i++){
		if(nbase >= 1){
			x[i] = nbase % 2;
			nbase = nbase / 2;
		}
		conti = conti + 1;
	}
	
	for(conti; conti >= 0; conti--){
		cout << x[conti];
	}
}
	

