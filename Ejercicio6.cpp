#include<iostream>
using namespace std;
void copiar_cadena(char *,char *);
int main(){
    char *cadena=new char[50],*cadena2=new char[50];
	cout<<"Ingrese una cadena: ";cin.getline(cadena,50);
	cout<<"Ingrese otra cadena: ";cin.getline(cadena2,50);
	copiar_cadena(cadena,cadena2);
	cout<<cadena2;
	return 0;
}
void copiar_cadena(char *cad1,char *cad2){
	while(*cad1)
	    *(cad2++)=(*cad1++);
	*cad2='\0';
}