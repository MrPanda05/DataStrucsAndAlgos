#pragma once
#include "Macros.hpp"

namespace SinglyList{

	/// <summary>
	/// Singly linked list are lists that a node has a data and a pointer to the next node, if the next node is null it is the end of the list.
	/// 
	/// Head is the first node
	/// </summary>
	template <typename T>
	class SinglyLists {
		private:
			class Node {
			public:
				Node(T data) : _data(data), _next(nullptr) {}
				Node* _next;
				T _data;
			};
			Node* _head;
			uint _size;
		public:
			SinglyLists();
			~SinglyLists();
			uint size() { return _size; };
			bool isEmpty();
			void print();
			void push(T data);//add to end
			void pop();//remove from end
			void pushFront(T data);//add to start
			void popFront();//remove from start
			void insert(uint index, T data);//insert node at index
			void remove(uint index);//remove node at index
			void set(uint index, T data);//set node data at index
			T get(uint index);//get node data at index
			uint find(T data);//find the first index node with data
	};
}
#include "SinglyLinkedLists.inl"