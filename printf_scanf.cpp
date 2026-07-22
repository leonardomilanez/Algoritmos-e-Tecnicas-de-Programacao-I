#include <iostream>
using namespace std;

int main(){
	int n;
	printf("Informe o numero de linhas: \n");
	scanf("%d", &n);
	int x;
	float y;
	char z;
	printf("\n Informe um inteiro, um real e um caracter: ");
	scanf("%d %f %c", &x, &y, &z);
	if(z >= 'a' && z <= 'z')
		z -= 32;
	for(int i = 0; i < n; i++){
		printf("%d \t %f \t %c \n", x, y, z);
		x += 32;
		y *= 2;
		z++;	
	}
}
