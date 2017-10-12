#pragma once

template <class T>
struct Node {
	T _info;
	Node *_next;

	Node(T info, Node * next = nullptr);
};

template <class T>
Node<T>::Node(T info, Node *next) {
	_info = info;
	_next = next;
}
