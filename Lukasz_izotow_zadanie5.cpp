#include <iostream>
using namespace std;
int main(){
	int liczba1 = 0;
	int liczba2= 0;
	int liczba3 = 0;
	cout << "Podaj szerokosc: ";
	cin >> liczba1;
	cout << "Podaj wysokosc: ";
	cin >> liczba2;
	for(int i=0; i < liczba2; i++){
		for(int k=0; k < liczba3; k++){
		cout << " ";
		}
		for(int j=0; j < liczba1; j++){
			cout << "*";
		}
		liczba3 += 1;
		liczba1 -= 2;
	cout << endl;
	}
	return 0;
}
