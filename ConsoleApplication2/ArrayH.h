#pragma once
class Array {
private:
    int* arr;
    int size;

public:
    Array();

    ~Array();

    Array(const Array& obj);

    int operator[](int index);

    void Init(int SIZE, int min, int max);

    void Init_v2(int min, int max);

    void PrintArray() const;
};
