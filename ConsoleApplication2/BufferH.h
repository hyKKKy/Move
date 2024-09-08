#pragma once
class Buffer
{
private:
	int* arr;
	int size;
public:
	Buffer();

	Buffer(int SIZE);
	
	~Buffer();

	Buffer(Buffer&& other) noexcept;
		
	Buffer& operator=(Buffer&& other) noexcept;

};

