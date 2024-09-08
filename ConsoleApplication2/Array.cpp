#include "ArrayH.h"
#include <iostream>

Array::Array() {
    this->arr = nullptr;
    this->size = 0;
}

Array::~Array() {
    delete[] arr;
}

Array::Array(const Array& obj) {
    size = obj.size;

    delete[] arr;

    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = obj.arr[i];
    }
}

int Array::operator[](int index) {
    if (index < 0 || index >= this->size) {
        std::cout << "error!" << std::endl;
    }
    return arr[index];

}

void Array::Init(int SIZE, int min, int max) {
    size = SIZE;
    delete[] arr;
    arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (max - min) + min;
    }
}

void Array::Init_v2(int min, int max) {
    for (int i = 0; i < this->size; i++) {
        this->arr[i] = rand() % (max - min) + min;
    }
}

void Array::PrintArray() const {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}