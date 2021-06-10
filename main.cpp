#include<iostream>
#include "linkedlist.h"
using namespace std;

int main(){
    int tam;   //definicion del tamanio de la lista
    int opc;    //variable para las opciones del usuario 
    int n;      //auxiliar para la busqueda de elementos

    cout<<"\nSize: ";cin>>tam;
    if (tam<1)
           cout<<"Numero invalido";
    else if (tam>0){
        LinkedList lista;  
		lista.addNodes(tam);
        while (true){
            cout<<"\n(1)Insertar nuevo elemento\n(2)Remover un elemento\n(3)Imprimir lista completa\n(4)Para salir del programa";
            cout<<"\nOpcion: ";cin>>opc;
			if (opc==1){
                cout<<"Elemento: ";cin>>n;
                cout<<"Elemento agregado\n";
                cout<<"\n\n";
            }
            else if (opc==2){
                cout<<"Que elemento quiere eliminar (POSICION): ";cin>>n;
                lista.remove(n);
                cout<<"\n\n";
            }
            else if (opc==3){
                cout<<lista;
                cout<<"\n\n";
            }       
            if (opc==4)
            	break;
        }
    }
}
