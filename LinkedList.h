#pragma once
#include "Node.h";

struct LinkedList {
	Node *_head;

	void addFirst(T info) {
		auto *newNode = new Node(info, _head);
		_head = newNode;
	}
};
