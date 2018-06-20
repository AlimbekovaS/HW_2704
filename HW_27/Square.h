#pragma once
#include"Library.h"
class Square
{
private:
	int *els;
	int size;
public:
	Square();
	Square(int size);
	int S();

	friend ostream &operator<<(ostream &os, const Square&square);
	friend istream &operator >> (istream &is, Square &square);
	Square & operator++();
	Square & operator--();
	bool operator!=(const Square &sq);
	bool operator==(const Square &sq);
	bool operator>(const Square &sq);
	bool operator<(const Square &sq);
	int & operator[](int index);
	Square & operator=(Square& obj);
	Square & operator +=(Square & obj);
	Square & operator -=(Square & obj);
	Square & operator()(int a);
	int Size();
	~Square();
};

