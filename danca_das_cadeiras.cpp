#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Insira o número de participantes: ";
	int n;
	cin >> n;
	
	int i = 0, avanco[n], conti = 0, andar = 0, excesso = 0, contAndadas = 0, j = 0;
	char nome[1024], nomeDesbancado[1024];
	
	for(i = 0; i < 1024; i++){
		nome[i] = '';
	}
	
	for(i = 0; i < 1024; i++){
		nomeDesbancado[i] = '';
	}
		
	for(i = 0; i < n; i++){
		avanco[i] = 0;
	}
	
	for(i = 0; i < n; i++){
		cout << "Insira o nome dos participantes: \n";
		cin >> nome[i];	
	}
	
	for(i = 0, j = 0; i < n; i++, j++){
		cout << "Quantas cadeiras andar? \n";
		cin >> 	andar;
		conti++;
		
		if(andar > 0){
			if(i == 0){
				nomeDesbancado[i + andar] = nome[i + andar]; 
				nome[i + andar] = nome[i];
				avanco[j] = andar;
				nome[i] = '';
				
				if((i + andar) > n-1){
					excesso = i;
					while(excesso < n){
						contAndadas++;
						excesso++;
					}
					andar = andar - contAndadas;
					avanco[j] = andar - i;
					if(andar == 0){
						cout << "Jogue direito! \n";
						break;
					}
					else{
						nomeDesbancado[andar] = nome[andar];
						nome[andar] = nome[0];	
						nome[0] = '';
					}
				}			
			}
			
			else{		
				if(-(andar) == -(i)){
					break;
				}
				if((i + andar) > n-1){
					excesso = i;
					while(excesso < n){
						contAndadas++;
						excesso++;
					}
					andar = andar - contAndadas;
					avanco[j] = andar - i;
					nome[0] = nomeDesbancado[excesso];
					if(andar == 0){
						break;
					}
					else{
						nomeDesbancado[andar] = nome[andar];
						nome[andar] = nome[0];	
						nome[0] = '';
					}	
				}
				else{
					nomeDesbancado[i+andar] = nome[i+andar];
					nome[i+andar] = nomeDesbancado[i];
					avanco[j] = andar;
				}
			}
		}
		if(andar < 0){
			if(i == 0){	
				andar = -(andar);
				avanco[j] = andar;
				if(andar == 0){
					cout << "Jogue direito! \n";
					break;
				}
				else{
					if(andar > n){
						andar = andar - n;
					}
					nomeDesbancado[n - andar] = nome[n - andar];
					nome[n - andar] = nome[i];
				}
			}					
			else{
				if(andar == -(i)){
					break;
				}
				if((i + andar) < 0){
					excesso = i;
					while(excesso > 0){
						contAndadas++;
						excesso--;
					}
					andar = -(andar) - contAndadas;
					avanco[j] = andar - i;
					if(andar - )
					nomeDesbancado[andar] = nome[andar];
					nome[andar] = nome[i];	
				}
				else{
					nomeDesbancado[i+andar] = nome[i+andar];
					nome[i+andar] = nomeDesbancado[i];
					avanco[j] = andar;
				}
			}
		}
		i = (i+andar) - 1;
	}
}
