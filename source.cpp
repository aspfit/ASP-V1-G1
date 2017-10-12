#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	auto *newList = new LinkedList<int>();
	newList->addFirst(5);
	newList->addFirst(10);
	newList->addFirst(15);
	newList->addFirst(20);
	newList->addFirst(25);
	newList->displayList();
	cout << endl;

	newList->removeInfo(30);
	newList->displayList();

	getchar();
	return 0;
}
