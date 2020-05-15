#include<iostream>
using namespace std;
int tamanio(char *);
void concatenar(char *,char *);
int main(){
	char *cadena=new char[50],*cadena2=new char[50];
	cout<<"Ingrese una cadena: ";cin.getline(cadena,50);
	cout<<"Ingrese otra cadena: ";cin.getline(cadena2,50);
	cout<<cadena2<<endl;
	concatenar(cadena,cadena2);
	cout<<cadena2<<endl;
	return 0;
}
void concatenar(char *cad1,char *cad2){
	while(*cad1)
	    *(cad2+tamanio(cad2))=(*cad1++);
}
int tamanio(char * cad){
	return *(cad++)=='\0' ? 0 : 1+tamanio(cad);
}