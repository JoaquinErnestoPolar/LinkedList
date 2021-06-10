#ifndef _NODE_H_
#define _NODE_H_
#include <iostream>
using namespace std;
class Node{
	int elem;
	Node * next;
	friend class LinkedList;
public:
	Node();	
	Node(int);
	int getNode();
    Node* getNext(){return next;}
	void printNodo();
};
Node::Node(){//Consructor por defecto
	elem=0;
	next=NULL;
}
Node::Node(int _elem){//Constructor por parametro
	elem=_elem;
	next=NULL;
}
int Node::getNode(){
	return elem;
}
void Node::printNodo(){
	cout<<elem<<"->";
}
#endif
