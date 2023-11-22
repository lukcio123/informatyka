#include <iostream>
using namespace std;

int main(){
	int liczba;
	cout << "Podaj liczbe: ";
	cin >> liczba; 
	
	while (liczba > 0){
		cout << liczba << ", ";
		liczba = liczba / 2;
		
		
	}
	
	
	
cout << endl;
system("pause");
}