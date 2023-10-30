   #include<iostream>
   using namespace std;
 
   int main(){
   	// ciąg znaków (tekst) - string
   	// liczby całkowite - short, int, long, unsigned short
   	short a, b;
   	cout << "Podaj a: ";
   	cin >> a;
   	cout << "Podaj a: ";
   	cin >> b;
   	   
   	   
   	   //instrukcja warunkowa - if(warunek)
   	   if(a > b) {
   	   	cout << a << " > " << b; //cout << zmienna << "tekst" << zmienna;
   	   	
   	   }
   	   	// = operator przypisania
   	   	// == operator porownania
   	   	// != rozne od (a !=b) -> czy 4 jest rozne od 5 (tak)
   	   	else if(a==b){ //sprawdzanie kolejnego warunku
   	   	    cout << a << " == " << b;
			  }
		 else{ // jezeli zaden z powyzszych warunkow sie nie spelni to wykona else (w przeciwnym razie) 
            cout << a << " < " <<b;
	    }
	   
	   return 0;
   	
 
 
 
 }
 
 
 