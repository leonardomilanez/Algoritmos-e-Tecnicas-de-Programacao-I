#include <iostream>
using namespace std;
int main(){
	int x, y, z, w;
	cout << "Qual a altura do trapezio? ";
	cin >> x;
	cout << "Qual a base maior do trapezio? ";
	cin >> y;
	cout << "Qual a base menor do trapezio? ";
	cin >> z;
	w = (((y+z)*x)/2);
	cout << "A área do trapezio é: " << w;
return 0;	
}
