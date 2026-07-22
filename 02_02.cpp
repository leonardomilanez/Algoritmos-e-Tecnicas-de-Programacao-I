#include <iostream>
using namespace std;
int main(){
	int nota1, nota2, nota3;
	float media, notaExame;
	cout << "nota 1: ";
	cin >> nota1;
	cout << "nota 2: ";
	cin >> nota2;
	cout << "nota 3: ";
	cin >> nota3;
	media = (nota1 + nota2 + nota3) / 3;
	if(media < 3){
		cout << "Voce foi reprovado.";
	}
	if((media >= 3) && (media < 7)){
		notaExame = 12 - media;
		cout << "voce precisa de " << notaExame << " pontos para ser aprovado.";
	}
	if(media >= 7){
		cout << "Voce foi aprovado!";
	}
return 0;
}
