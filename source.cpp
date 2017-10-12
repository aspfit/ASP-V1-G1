#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	auto *newList = new LinkedList<int>();
	newList->addFirst(5);
	newList->addFirst(10);
	newList->addFirst(15);
	newList->displayList();
	newList->removeLast();
	newList->displayList();

	getchar();
	return 0;
}
