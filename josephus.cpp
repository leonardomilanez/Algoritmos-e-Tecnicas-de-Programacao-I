#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int n = 24, m = 11;
	
	int x[n], y[n], i = 0, j = 0, k = 0, l = n;
	
	for(i = 0; i < n; i++){
		cout << "Insira o " << i << "° participante: \n";
		cin >> x[i];
	}
	
	for(i = 0, j; i < n; i++){
		j = j + (m-1);
		if(j >= n){
			j = (m-1) - (n - (j-(m-1)));
		}
		while(x[j] == 0){
			j++;
		}
		y[i] = x[j];
		x[j] = 0;
	}
	
	for(i = 0, m; i < n; i++, m++){
		if(m == n-1){
			m = 0;
		}
		cout << y[m-1] << "\t";
	}

}
