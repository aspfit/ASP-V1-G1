#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	auto *newList = new LinkedList<int>();
	newList->addFirst(5);
	newList->addFirst(10);
	newList->addFirst(15);

	cout << newList->_head->_next->_info << endl;

	getchar();
	return 0;
}
