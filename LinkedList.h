#pragma once
#include "Node.h";

template <class T>
struct LinkedList {
public:
	Node<T> *_head;

	void addFirst(T info);
	void removeLast();
};

template<class T>
void LinkedList<T>::addFirst(T info) {
	auto *newNode = new Node<T>(info, _head);
	_head = newNode;
}

template<class T>
void LinkedList<T>::removeLast() {
	Node<T> *temp = this->_head;
	Node<T> *previousTemp = nullptr;
	while (temp->_next != nullptr) {
		previousTemp = temp;
		temp = temp->_next;
	}
	
	previousTemp->_next = nullptr;
	delete temp;
}

