#include<iostream>
using namespace std;
int *ordenar(int *,int);
void mostrar(int *,int);
int main(){
    int numero[]={1,4,2,3,5,8,5},size=7;
    int *arreglo=numero;
    ordenar(arreglo,size);
    mostrar(arreglo,size);
    return 0;
}
int *ordenar(int *arreglo,int tam){
	int i,pos,aux;
	for(i=0;i<tam;i++){
		pos = i; 
		aux = *(arreglo+pos);
		while((pos>0) && (*(arreglo+pos-1) > aux)){
			*(arreglo+pos) = *(arreglo+pos-1);
			pos--;
		}
		*(arreglo+pos) = aux;
	}
    return arreglo;
}
void mostrar(int *arreglo,int size){
    cout<<"\n Mostrando arreglo: "<<endl;
    for(int j=0;j<size;j++)
    	cout<<*(arreglo+j)<<" ";
}