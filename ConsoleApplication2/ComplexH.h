#pragma once
class ComplexNumber {
private:
	int n1;
	int n2;
public:
	ComplexNumber();

	ComplexNumber(int N1, int N2);
	
	int GetN1() const;

	int GetN2() const;

	void print() const;

	ComplexNumber operator+(const ComplexNumber& num) const;

};