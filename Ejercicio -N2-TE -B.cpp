#include<iostream>
using namespace std;
#include<conio.h>

int main(){
	

int dolar=1;
int tasaC=0;
int montop=0;
int resultado=0;
int resultado1;
char opc;


do{


cout<<"Ingrese la tasa del dia :"<<endl;
cin>>tasaC;
cout<<"monto personalizado:"<<endl;
cin>>montop;







resultado=tasaC*1;
cout<<"1$ dolar-- es:"<<resultado<<endl;
resultado=tasaC*2;
cout<<"2$ dolar---es:"<<resultado<<endl;
resultado=tasaC*5;
cout<<"5$ dolar---es:"<<resultado<<endl;
resultado=tasaC*10;
cout<<"10$ dolar--es:"<<resultado<<endl;
resultado=tasaC*15;
cout<<"15$ dolar--es:"<<resultado<<endl;
resultado=tasaC*20;
cout<<"20$ dolar--es:"<<resultado<<endl;
resultado=tasaC*50;
cout<<"50$ dolar--es:"<<resultado<<endl;
resultado=tasaC*100;
cout<<"100$ dolar-es:"<<resultado<<endl;


cout<<"tasa personalizada:"<<resultado1<<endl;
resultado1=montop*dolar;


cout<<"continuar con la  operacion(Si o no)"<<endl;
opc= getch();
cin>>opc;

}while(opc=='S' || opc=='s' );






	

	
return 0;
}
