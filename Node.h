#pragma once

template <class T>
struct Node {
	T _info;
	Node *_next;

	Node(T info, Node * next = nullptr) {
		_info = info;
		_next = next;
	}
};
