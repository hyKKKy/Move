#include <iostream>
#include "PointH.h"
#include "ComplexH.h"
#include "ArrayH.h"
#include "BufferH.h"

int main()
{
    Point p1(1, 2);
    std::cout << p1;
    std::cout << std::endl;

    ComplexNumber num1(1, 3);
    ComplexNumber num2(2, 5);

    ComplexNumber num3 = num1 + num2;
    num3.print();
    std::cout << std::endl;

    Array arr1;
    arr1.Init(5, 1, 10);
    arr1.PrintArray();

    std::cout << arr1[2];

    Buffer buff1(5);
    
    Buffer buff2 = std::move(buff1); 
    
    
}

