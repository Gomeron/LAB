#include <iostream>
#include <cstdlib>
#include "List.cpp"


using namespace std;


int main(){

	List<int> lst;
	lst.Add(100);
	lst.Add(200);
	lst.Add(130);
	lst.Add(140);
	List<int> :: Iterator it;
	for(auto& Node: lst){
		cout << Node << " " << endl;
		Node = 1;
}
	for(auto& Node: lst){
		cout << Node << " " << endl;
} 
}	
