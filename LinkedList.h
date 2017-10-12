#pragma once
#include <iostream>
#include "Node.h";

template <class T>
struct LinkedList {
public:
	Node<T> *_head;

	void addFirst(T info);
	void removeLast();
	void displayList();
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

template<class T>
inline void LinkedList<T>::displayList()
{
	Node<T> *temp = this->_head;
	while (temp != nullptr) {
		std::cout << temp->_info << std::endl;
		temp = temp->_next;
	}
}

