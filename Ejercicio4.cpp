#include<iostream>
using namespace std;
int tamanio(char *);
int recursivo(char *);
int main(){
	char *cadena=new char[50];
	cout<<"Ingrese una cadena: ";cin.getline(cadena,50);
	cout<<tamanio(cadena)<<endl;
	cout<<recursivo(cadena)<<endl;
	return 0;
}
int tamanio(char *cad){
	int cont=0;
	while(*cad++)
	    cont++;
	return cont;
}
int recursivo(char *cad){
	return *(cad++)=='\0' ? 0 : 1+tamanio(cad);
}