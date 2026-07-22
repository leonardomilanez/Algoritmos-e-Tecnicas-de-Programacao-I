#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

int main(){
	
	int v[4] = {12, -2, 23, 4};
	int x = 12;
	int y = 8;
	int z = -2;
	int *ptr = &v[2];
	x = *ptr;
	y = *(ptr + 2);
	z = *(ptr + z);
	*ptr = 0;
	
}
