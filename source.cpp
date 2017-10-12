#include <iostream>
using namespace std;

typedef int T;
struct Node {
	T _info;
	Node *_next;

	Node(T info, Node * next = nullptr) {
		_info = info;
		_next = next;
	}
};

int main() {
	Node *first = new Node(10);
	Node *second = new Node(9, first);
	cout << first->_info << endl; //10
	cout << second->_next->_info << endl; //10

	
	getchar();
	return 0;
}
