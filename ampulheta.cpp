#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main() {

  setlocale(LC_ALL, "Portuguese");

  cout << "Insira o tamanho n, ímpar e >=5, da matriz quadrada: \n";
  int n;
  cin >> n;

  int x[n][n], y[((n+3)*(n-1))/4], i = 0, j = 0, k = 0, conti = 0;
  
  for(i = 0; i < n; i++){
  	for(j = 0; j < n; j++){
  		cout << "Insira o elemento da linha " << i << " coluna " << j << ": \n";
  		cin >> x[i][j];
	  }
  }
  
  for(i = 0, j = 0, k = 0; i <= (n/2); i++, j++, k++){
  	if((x[i][j]+x[(n-1)-i][j]) % 2 != 0){
  		y[k] = x[i][j]+x[(n-1)-i][j];
	  }
	else{
		y[k] = x[(n-1)-i][j];
	}
  }
  
  for(i = 1, j = 1; i <= (n/2); i++, j++){
  	for(conti = 0, k; (i-conti) >= 0; conti++, k++){
  		if((x[i-conti][j]+x[(n-1)-(i-conti)][j]) % 2 != 0){
  			y[k] = x[i-conti][j]+x[(n-1)-(i-conti)][j];
		}
		else{
			y[k] = x[(n-1)-(i-conti)][j];
		}
	  }
  }
  
  for(i = (n/2)-1, j = (n/2)+1; i >= 0; i--, j++){
  	for(conti = 0, k; (i-conti) >= 0; conti++, k++){
  		if(i == 0){
  			y[k] = x[j][j];
  			break;
		}
  		if((x[i-conti][j]+x[(n-1)-(i-conti)][j]) % 2 != 0){
  			y[k] = x[i-conti][j]+x[(n-1)-(i-conti)][j];
		}
		else{
			y[k] = x[(n-1)-(i-conti)][j];
		}
	  }
  }
  
  for(k = 0; k < (((n+3)*(n-1))/4); k++){
  	cout << y[k] << "\t";
  }
}
