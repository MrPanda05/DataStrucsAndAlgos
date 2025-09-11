#pragma once

namespace LinkedList {


	template <typename T>
	struct SLL_Node {
		T _data;
		SLL_Node<T>* _next;
		SLL_Node(T data) : _data(data), _next(nullptr) {}
	};

	template <typename T>
	struct DLL_Node {
		T _data;
		DLL_Node<T>* _next;
		DLL_Node<T>* _prev;
		DLL_Node(T data) : _data(data), _next(nullptr), _prev(nullptr) {}
	};
}