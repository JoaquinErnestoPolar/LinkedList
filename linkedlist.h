#ifndef _LINKEDLIST_H_
#define _LINKEDLIST_H_
#include "node.h"
using namespace std;
class LinkedList{
	int size;
	Node* head;
	friend ostream &operator<<(ostream &,const LinkedList &);
public:
	LinkedList();
	~LinkedList();
	int getNode();
	void addNodes(int);
	void insert(int);
	void remove(int);
	void print();
};


LinkedList::LinkedList(){
	head=NULL;
	size=0;	
}
void LinkedList::addNodes(int tam){
	int temp;
    for (int i=0; i<tam; i++) {
        cout << "Ingresa el elemento " << i + 1 <<": ";cin >> temp;
        insert(temp);
    }
}
void LinkedList::insert(int _elem){
	Node *new_node = new Node (_elem);
    Node *temp = head;
 
    if (head==NULL) {
        head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    size++;
}
void LinkedList::remove(int pos){
	Node *temp = head;
    Node *temp1 = temp->next;
 
    if (pos<1 || pos>size) 
        cout << "Fuera de rango " << endl; 
    else if (pos == 1) {
        head = temp->next;
    } 
    else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Node *aux_nodo = temp1;
                temp->next = temp1->next;
                delete aux_nodo;
                size--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}
void LinkedList::print(){
	Node *temp = head;
    if (head==NULL)
        cout << "La Lista esta vacia" << endl;
    else{
        while (temp != NULL) {
            temp->printNodo();
            if (!temp->next) 
                cout << "NULL";
            temp = temp->next;
        }
  }
  cout << "\n\n";
}
ostream &operator<<(ostream &o,const LinkedList &l){
	Node *temp = l.head;
	if(l.head == NULL){
 		o<<"lista vacia"<<endl;
	}
	else{
  		while(temp != NULL){
     		o<<temp->getNode()<<" -> ";
            if(temp->getNext() == NULL){
        		o<<"NULL"; 
    		}
    		temp = temp->getNext();    
  		}
        o<<endl;
	}
    return o;
}

LinkedList::~LinkedList(){
}
#endif
