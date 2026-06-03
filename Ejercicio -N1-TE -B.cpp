#include<iostream>
using namespace std;
#include<conio.h>

int main(){
	char opc;
	float numF=0;
	float resultado=0;
	float resultadoA=0;
	int operacion=0;

	
do{
	cout<<"ingrese el numero para la operacion:"<<endl;
	cout<<"Para Farenheit a Kelvin ingrese 1"<<endl;
	cout<<"Para Farenheit a Celsius ingrese 2"<<endl;
	cin>>operacion;	

	cout<<"Ingrese el valor en grados Farenheit a convertir"<<endl;
	cin>>numF;
		

	switch(operacion){
	
	case 1:
		cout<<"Para la operacion  F a K"<<endl;
		resultado=((numF-32)/1.8)+273.15;
		cout<<"Resultado F a K:"<<resultado<<endl;
		break;
	case 2:
		cout<<"Para la operacion  F a C"<<endl;
		resultadoA=(numF-32)*(0.56);
		cout<<"ResultadoA F a C:"<<resultadoA<<endl;
		break;
	default:
		cout<<"error da datos invalidos"<<endl;
		break;	
}



cout<<"continuar con la  operacion(Si o no)"<<endl;
opc= getch();
cin>>opc;

}while(opc =='S'|| opc =='s' );




	

return 0;
}
