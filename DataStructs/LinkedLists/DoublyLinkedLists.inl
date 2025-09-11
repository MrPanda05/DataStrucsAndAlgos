#include "DoublyLinkedLists.hpp"
#include "Macros.hpp"

namespace LinkedList {

	template<typename T>
	DoublyLists<T>::DoublyLists() : _head(nullptr), _tail(nullptr), _size(0) {}

	template<typename T>
	DoublyLists<T>::~DoublyLists() {
	}

}