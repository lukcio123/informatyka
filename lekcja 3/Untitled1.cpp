 #include <iostream>
 using namespace std;
 
 int main(){
  for(int i = 1; i<=2; i++){
  	cout <<endl;
  for(int j = 0; j <11; j++){
  	int k = i *j;
  cout << i<< "*" <<j << "=" <<k<< endl;
 
}
}
 //zadanie2

         int szerokosc, wysokosc;
    
    		
    		cout << "Podaj szerokosc: " << endl;
    		cin >> szerokosc;
    		cout << "Podaj wysokosc: " << endl;
    		cin >> wysokosc;
    		
		}
         
		 for(int i=0; i < wysokosc; i++) {
		 	for(int j=0; j < szerokosc; j++){
		 	if(i == 0 || i == wysokosc-1)
			 	cout << " * ";
			 	else if(j == 0 || j == szerokosc-1)
			 	     cout << " * ";
			 	else
			 	   cout << " ";
			 	   
		 		
			 }
		 }


   cout << endl;
   system("pause");

	}
 	

 