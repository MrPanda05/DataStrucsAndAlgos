#include <iostream>
#include <cstdlib>
#include "DataStructs/SinglyLinkedLists.hpp";
using namespace SinglyList;

int main() {
	std::cout << "Hello, World!" << std::endl;
	SinglyLists<int>* balls = new SinglyLists<int>();
	/*balls->print();
	balls->print();
	balls->pop();
	balls->pop();
	balls->print();*/

	/*balls->push(1);
	balls->push(2);
	balls->push(3);
	balls->print();
	balls->pushFront(54);*/
	/*balls->pushFront(1);
	balls->pushFront(2);
	balls->pushFront(3);
	balls->print();
	balls->insert(0, 11);
	balls->print();
	balls->insert(4, 23);
	balls->print();
	balls->insert(2, 23);
	balls->print();*/

	balls->push(2);
	balls->push(3);
	balls->push(4);
	balls->push(5);
	balls->push(6);
	balls->print();
	//balls->remove(2);
	balls->set(0, 600);
	balls->print();




	return 0;
}