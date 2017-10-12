#pragma once

template <class T>
struct Node {
	T _info;
	Node<T> *_next;

	Node(T info, Node<T> * next);
};

template <class T>
Node<T>::Node(T info, Node<T> *next) {
	_info = info;
	_next = next;
}
