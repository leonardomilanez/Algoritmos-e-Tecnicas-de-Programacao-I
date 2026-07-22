#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
void maiusculo(char frase1[], char frase2[]){
    int i = 0;
    while(frase1[i] != '\0'){
        frase2[i] = toupper(frase1[i]);
        i++;
    }
    frase2[i] = '\0';
}

int main() {
	char frase1[500];
	char frase2[500];
	cout << "Digite sua frase: ";
    gets(frase1);
    maiusculo(frase1, frase2);
    printf("Sua frase em capslock: %s\n", frase2);
return 0;
}
