#pragma once
#include "Node.h";

template <class T>
struct LinkedList {
public:
	Node *_head;

	void addFirst(T info);
};

template<class T>
void LinkedList<T>::addFirst(T info) {
	auto *newNode = new Node(info, _head);
	_head = newNode;
}
