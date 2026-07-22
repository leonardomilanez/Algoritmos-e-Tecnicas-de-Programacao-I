#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Até qual número? \n";
	int n;
	cin >> n;
	
	int x[n];	
	int j = 0;
	int i = 0;
	
	for(int i=2; i<n; i++){
		x[j] = i;
		x[i] = x[j];
		j++;
	}
	
	bool primo = true;
	int a[n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(x[i] % x[j] == 0 && x[i] != x[j]){
				primo = false;
			}
		}
		if(primo == true){
			a[i] = x[i];
			cout << a[i] << " é primo, ";
		}
		primo = true;	
	}
}
