#pragma once

template <typename T>
class Node{
	public:
	T info;
	Node *Next,*Prev;
};


template <typename T>
class List{
	
	public:
		Node<T> *Head,*Tail;
		class Iterator{
			friend List<T>;
			Node<T> *P;
			public:
				Iterator(Node<T> *p = NULL): P(p){};

					const T& operator *() const{

						return P->info;

					};

					T& operator *(){

						return P->info;

					};



					Iterator operator ++(){

						P = P->Next;

						return *this;

					};

					Iterator operator ++(int){

						P = P->Next;

						return *this;

					};

					Iterator operator --(){

						P = P->prev;

						return *this;

					};

					Iterator operator --(int){

						P = P->Prev;

						return *this;

					};
					
					Iterator operator-> (){
    					
					return P;
					
					}

					friend bool operator !=(const Iterator& x, const Iterator& y){

						return x.P != y.P;

					};

					friend bool operator ==(const Iterator& x, const Iterator& y){

						return x.P == y.P;

					};

			}; 
	
	List():Head(NULL),Tail(NULL){}

	~List();

	Iterator begin()const{

		return Iterator(Head);

	};

	Iterator end()const{

		return Iterator(Tail);

	};

	void Show();

	void Add(T info);
};
