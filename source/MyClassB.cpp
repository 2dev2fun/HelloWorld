#include "MyClassB.h"

#include <iostream>

MyClassB::MyClassB(int data)
		: mData(data) {
	std::cout << __func__ << std::endl;
}

MyClassB::~MyClassB() {
	std::cout << __func__ << std::endl;
}

void MyClassB::print() {
	std::cout << "Data:\t" << mData << std::endl;
}
