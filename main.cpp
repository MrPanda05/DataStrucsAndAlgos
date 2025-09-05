#include <iostream>
#include <cstdlib>
#include "DataStructs/LinkedLists.hpp";
using namespace LinkedLists;

int main() {
	std::cout << "Hello, World!" << std::endl;
	SinglyList<int>* balls = new SinglyList<int>();
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
	balls->pushFront(1);
	balls->pushFront(2);
	balls->pushFront(3);
	balls->print();
	balls->popFront();
	balls->print();
	return 0;
}