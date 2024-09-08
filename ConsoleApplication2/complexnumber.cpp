#include "ComplexH.h"
#include <iostream>

ComplexNumber::ComplexNumber() {
	n1 = 0;
	n2 = 0;
}
ComplexNumber::ComplexNumber(int N1, int N2) {
	n1 = N1;
	n2 = N2;
}

int ComplexNumber::GetN1() const{
	return n1;
}

int ComplexNumber::GetN2() const {
	return n2;
}

void ComplexNumber::print() const {
	std::cout << "(" << n1 << ", " << n2 << ")";
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber& other) const {
	ComplexNumber result;
	result.n1 = this->n1 + other.n1;
	result.n2 = this->n2 + other.n2;
	return result;
}