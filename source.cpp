#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList newList;
	newList.addFirst(5);
	newList.addFirst(10);
	newList.addFirst(15);
	newList.print();

	getchar();
	return 0;
}
