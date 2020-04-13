#include "MyClassA.h"

#include <iostream>

MyClassA::MyClassA(int data)
		: mData(data) {
	std::cout << __func__ << std::endl;
}

MyClassA::~MyClassA() {
	std::cout << __func__ << std::endl;
}

void MyClassA::print() {
	std::cout << "Data:\t" << mData << std::endl;
}
