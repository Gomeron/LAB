#include <iostream>
#include <cstdlib>
#include "List.h"

using namespace std;

template <typename T>
List<T>::~List(){
	while(Head){
		Tail= Head -> Next;
		delete Head;
		Head=Tail;
		}
}

template <typename T>
void List<T>::Add(T info){
	Node<T>*temp=new Node<T>;
	temp -> Next = NULL;
	temp -> info=info;
	if(Head!=NULL){
		temp-> Prev=Tail;
		Tail -> Next=temp;
		Tail=temp;				
	}
	else{
		temp -> Prev = NULL;
		Head=Tail=temp;
	}
}

template <typename T>

void List<T>::Show(){

Node<T> *temp = Head;

while(temp!=NULL)

{

cout<<temp->info<<" ";

temp = temp->Next;

}
};


