    #include <iostream>
    using namespace std;
    
    int main(){
    	/*inkrementacja
    	i = i + 1
    	i += 1
    	i++
    	
    	
    	Dekrementacja
    	   i = i - 1
    	   i -= 1
    	   i--
    	*/
    	// for(wartoscPoczatkowa; warunekKonczacy; krok)
    	for(int i= 0; i < 5; i++){ // i zmienna lokalna istnieje tylko  w pętli 
    
    		cout << "Ineracja nr: " << i <<endl;
    		
    		cout << "Podaj szerokosc: ";
    		cin >> szerokosc;
    		cout << "Podaj wysokosc: ";
    		cin >> wysokosc;
    		
		}
         
		 for(int i = 0; i < 5; i++){
		 	for(int j = 0; j < 5; j++){
		 		cout << " " << i << j;
			 }
		 }


   cout << endl;
   system("pause");

	}