#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	Node *first = new Node(10);
	Node *second = new Node(9, first);
	cout << first->_info << endl; //10
	cout << second->_next->_info << endl; //10

	LinkedList newList;
	newList.addFirst(5);
	newList.addFirst(10);
	newList.addFirst(15);

	getchar();
	return 0;
}
