#include "MyClassA.h"
#include "MyClassB.h"

#include <iostream>
#include <vector>

int main() {
	std::cout << "Hello World!" << std::endl;

	MyClassA a(1);
	MyClassB b(2);

	std::vector<int> test;

	a.print();
	b.print();
}
