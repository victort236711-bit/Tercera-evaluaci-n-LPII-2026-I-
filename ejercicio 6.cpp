#include<iostream>
using namespace std;
 #include <conio.h>
 int a;
 int b; 
 int c;
 char opc;
 
 int main(){
 	do{
	 
 	cout<< "introduce 3 numeros";
 	cin>> a >> b >> c;
 	
 	int mayor=a; int menor=a;
 	
 	if(a < b && b < c){
	 cout<< "si es creciente";
	 
	 } 		
		
 	else{
 		cout<< "no es creciente:";
	}
	
	cout<< "continuar con la operacion (si o no)"<<endl;
	opc= getch();
	cin>> opc;
	
}while(opc=='S'|| opc=='s');

 	return 0;
 	
 }
