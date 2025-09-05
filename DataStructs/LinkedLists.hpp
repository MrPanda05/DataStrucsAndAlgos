#pragma once

/// <summary>
/// Definition of aplications of linked lists!
/// 
/// Linked list consist of nodes that holds data and a pointer towards the next node
/// 
/// </summary>
namespace LinkedLists{
	/// <summary>
	/// Singly linked list are lists that a node has a data and a pointer to the next node, if the next node is null it is the end of the list.
	/// 
	/// Head is the first node
	/// </summary>
	template <typename T>
	class SinglyList {
		private:
			class Node {
			public:
				Node(T data) : _data(data), _next(nullptr) {}
				Node* _next;
				T _data;
			};
			Node* _head;
			unsigned int _size;
		public:
			SinglyList();
			~SinglyList();
			unsigned int size() { return _size; };
			bool isEmpty();
			void print();
			void push(T data);//add to end
			void pop();//remove from end
			void pushFront(T data);//add to start
			void popFront();//remove from start
			void insert(unsigned int index, T data);//insert node at index
			void remove(int index);//remove node at index
			void set(int index, T data);//set node data at index
			T get(int index);//get node data at index
			T find(T data);//find node with data
	};
}
#include "LinkedLists.inl"