#include<iostream>
using namespace std;
void invertir(int *,int);
int recursivo(int *,int);
void mostrar(int *,int);
void cambiar(int &, int &);
int main(){
    int numeros[]={1,2,3,4,5,6,7,8,9},size=9;
    int *arreglo=numeros;
    recursivo(arreglo,size);//invierte arreglo
    mostrar(arreglo,size);
    invertir(arreglo,size);//Vuelve a invertir (devuelve arreglo original)
    mostrar(arreglo,size);
	return 0;
}
void invertir(int *arreglo,int size){
	for(int i=0;i<(size+1)/2;i++)
	    cambiar(*(arreglo+i),*(arreglo+size-i-1));
}
int recursivo(int *arreglo,int size){
    if (size>0) { 
        cambiar(*(arreglo+0),*(arreglo+size-1));
        recursivo(arreglo+1, size-2);
    }
}
void mostrar(int *arreglo,int size){
    cout<<"\n Mostrando arreglo: "<<endl;
    for(int j=0;j<size;j++)
    	cout<<*(arreglo++)<<" ";
}
void cambiar(int &num1, int &num2){
    int aux=num1;
    num1=num2;
    num2=aux;
}