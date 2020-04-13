#include "MyClassA.h"
#include "MyClassB.h"

#include <iostream>

int main() {
	std::cout << "Hello World!" << std::endl;

	MyClassA a(1);
	MyClassB b(2);

	a.print();
	b.print();
}
