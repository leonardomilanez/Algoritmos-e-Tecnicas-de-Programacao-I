#include <iostream>
using namespace std;
int main(){
	int x, y, z;
	cout << "Quanto voce pesa? ";
	cin >> x;
	y = (1.15*x);
	cout << "seu novo peso seria " << y << " kg se engordasse 15% em relacao ao peso atual, sua baleia terrestre."; 
	z = (0.8*x);
	cout << "seu novo peso seria " << z	<< " kg se emagrecesse 20% em relacao ao peso atual, continue firme bro.";
return 0;	
}
