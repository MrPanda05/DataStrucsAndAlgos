#include "LinkedLists.hpp"
namespace LinkedLists {

    template<typename T>
    SinglyList<T>::SinglyList() : _head(nullptr), _size(0) {}

	template<typename T>
	SinglyList<T>::~SinglyList() {

	}

	template<typename T>
	void SinglyList<T>::print() {
		Node* first = _head;
		int count = 0;
		if (_size == 0) {
			std::cout << "List empty" << std::endl;
			return;
		}
		while (count <= _size) {
			if (count == _size) {
				std::cout << "nullptr ";
				break;
			}
			std::cout << first->_data << " -> ";
			first = first->_next;
			count++;
			
		}
		std::cout << std::endl;
	}

	template<typename T>
	bool SinglyList<T>::isEmpty() {
		return _size == 0;
	}

	/// Pseudo
	/// 
	/// 1 - create a new node with data T
	/// 2- if head is null
	/// 2.1 - then make head be the new node, increase size by one, returns
	/// 3 - create a Node variable current that receives the head pointer
	/// 4 - while loop, check if the next node of temp is not null
	/// 4.1 - since it is, asign the next node to temp
	/// 5 - next node of temp is null, that means it is the end of the list
	/// 6 - set the next node to the node created at the start
	/// 7 - increase size

	/// <summary>
	/// Adds a node with data at the end of the list
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="data">The data that the node will hold</param>
	template<typename T>
	void SinglyList<T>::push(T data) {
		Node* newNode = new Node(data);
		if (_head == nullptr) {
			_head = newNode;
			_size++;
			return;
		}
		Node* current = _head;
		while (current->_next != nullptr) {
			current = current->_next;
		}
		current->_next = newNode;
		_size++;
	}

	/// Pseudo
	/// 
	/// 1 - Check if head is null
	/// 1.1 - returns as list is empty
	/// 2 - Check if the head-next is null
	/// 2.1 - delete head
	/// 2.2 - set head pointer to null
	/// 2.3 - decrease size;
	/// 3 - Create a temp secondLast variable and set it to the head pointer
	/// 4 - While the secondLast.next.next is different than null
	/// 4.1 - set the temp to the next node;
	/// 5 - delete the temp next
	/// 6 - set the temp next to null
	/// 7 - decrement the size by 1

	/// <summary>
	/// Removes the last element of the list
	/// </summary>
	/// <typeparam name="T"></typeparam>
	template<typename T>
	void SinglyList<T>::pop() {
		if (_head == nullptr) return;

		if (_head->_next == nullptr) {
			delete _head;
			_head = nullptr;
			_size--;
			return;
		}

		Node* current = _head;
		while (current->_next->_next != nullptr) {
			current = current->_next;
		}
		delete current->_next;
		current->_next = nullptr;
		_size--;
	}

	/// Pseudo
	///
	/// 1 - create a new node with data
	/// 2 - if head pointer is null
	/// 2.1 - asign head to the new node
	/// 2.2 - increament size
	/// 3 - create a node temp variable rest
	/// 3.1 - set rest to the head
	/// 3.2 - set the head to the new node
	/// 3.3 - set the head.next with rest

	/// <summary>
	/// Add a new node with data T at the start of the list
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="data">The date to be added</param>
	template<typename T>
	void SinglyList<T>::pushFront(T data) {
		Node* newNode = new Node(data);
		if (_head == nullptr) {
			_head = newNode;
			_size++;
			return;
		}
		Node* rest = _head;
		_head = newNode;
		newNode->_next = rest;
		_size++;
	}
	/// Pseudo
	///
	/// 1 - if head is null return
	/// 2 - create a temp var rest
	/// 3 - set rest to head.next
	/// 4 - delete head
	/// 5 - set head to rest
	/// 6 - decrement counter

	/// <summary>
	/// Removes the first element of the list
	/// </summary>
	template<typename T>
	void SinglyList<T>::popFront() {
		if (_head == nullptr) return;

		Node* rest = _head->_next;
		delete _head;
		_head = rest;
		_size--;
	}

	/// Pseudo
	/// 1 - if index is greater than size() return, as can insert at pos with not elements
	/// 2 - if index is zero
	/// 2.1 pushFront() return
	/// 3 - if index is equal to size() 
	/// 3.1 - push() return
	/// if here, index will between 1-size()-1 and head will be guaranteed to not be null
	/// 4 - create counter variable and set to zero
	/// 5 - create a temp Node current set it to head
	/// 6 - while counter is less than index-1
	/// 6.1 - increment counter
	/// 6.2 - set current to current.next
	/// 7 - Create a new Node with data
	/// 8 - set newNode.next to current.next
	/// 9 - set current to newNode
	/// 10 - increment counter

	/// <summary>
	/// Insert a new node at index
	/// </summary>
	/// <typeparam name="T"></typeparam>
	/// <param name="index">The index at which the element will be put, zero based index</param>
	/// <param name="data">The data of the node</param>
	template<typename T>
	void SinglyList<T>::insert(unsigned int index, T data) {
		if (index > size()) return;
		if (index == 0) {
			this->pushFront(data);
			return;
		}
		if (index == size()) {
			this->push(data);
			return;
		}
		int counter = 0;
		Node* current = _head;
		while (counter < index - 1) {
			current = current->_next;
			counter++;
		}
		Node* newNode = new Node(data);
		newNode->_next = current->_next;
		current->_next = newNode;
		_size++;
	}

}
