#include <iostream>
using namespace std;
int main(){
	int notaTrabalho, notaAvaliacao, notaExame;
	float media;
	cout << "Qual foi a sua nota no trabalho? ";
	cin >> notaTrabalho;
	cout << "Qual foi a sua nota na avaliacao? ";
	cin >> notaAvaliacao;
	cout << "Qual foi a sua nota no exame? ";
	cin >> notaExame;
	media = (2*(notaTrabalho) + 3*(notaAvaliacao) + 5*(notaExame))/10;
	if(media >= 8){
		cout << "Voce obteve nota A, meus parabens *sons de palmas* ";
	}
	if((media >= 7) && (media < 8)){
		cout << "Voce obteve nota B, so o basico";
	}
	if((media >= 6) && (media < 7)){
		cout << "Voce obteve nota C, nao fez mais do que a sua obrigacao";
	}
	if((media >= 5) && (media < 6)){
		cout << "Voce obteve nota D, parabens viu seu coco";
	}
	if(media < 5){
		cout << "Voce obteve nota E, mas nao importa visto que voce nem deve saber ler";
	}
return 0;
}
