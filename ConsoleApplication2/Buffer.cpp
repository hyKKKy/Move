#include "BufferH.h"
#include <iostream>

Buffer::Buffer() {
	this->arr = nullptr;
	this->size = 0;
	
	std::cout << "Default constructor\n" << std::endl;
}

Buffer::Buffer(int SIZE) {
	this->size = SIZE;

	delete[] arr;

	arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 21;
	}
}

Buffer::~Buffer() {
	delete[] arr;
	std::cout << "Buffer deleted\n" << std::endl;
}

Buffer::Buffer(Buffer&& other) noexcept 
	: size(other.size), arr(new int[other.size]) {
		other.arr = nullptr;
		other.size = 0;
		std::cout << "Move constructor\n" << std::endl;
	}

Buffer& Buffer::operator=(Buffer&& other) noexcept {
	if (this != &other) {
		delete arr;

		arr = other.arr;
		size = other.size;

		other.arr = nullptr;
		other.size = 0;

		std::cout << "Move operator\n" << std::endl;
	}
	return *this;
}