#include "Square.h"
#include"Library.h"
Square::Square()
{
	size = 0;
	els = nullptr;

}

Square::Square(int size)
{
	this->size = size;
	els = new int[size];

	for (int i = 0; i < size; i++) //zapolniaem 
	{
		els[i] = rand() % 20+1;
	}
}


Square & Square::operator++()
{
	for (int i = 0; i < size; i++)
	{
		els[i]++;
	}
	return *this;
}

Square & Square::operator--()
{
	for (int i = 0; i < size; i++)
	{
		els[i]--;
	}
	return *this;
}

bool Square::operator!=(const Square & sq)
{
	if (this->els != sq.els)
		return true;
	else
		return false;
}

bool Square::operator==(const Square & sq)
{
	if (this->els == sq.els)
		return true;
	else
		return false;
}

bool Square::operator>(const Square & sq)
{
	if (this->els > sq.els)
		return true;
	else
		return false;
}

bool Square::operator<(const Square & sq)
{
	if (this->els < sq.els)
		return true;
	else
		return false;
}

int & Square::operator[](int index)
{
	return els[index];
}

Square & Square::operator=(Square & obj)
{
	for (int i = 0;i < Size();i++)
	{
		this->els[i] = obj.els[i];
	}

	return *this;
}

Square & Square::operator+=(Square & obj)
{
	for (int i = 0;i < Size();i++)
	{
		this->els[i] += obj.els[i];
	}
	return *this;
}

Square & Square::operator-=(Square & obj)
{
	for (int i = 0;i < Size();i++)
	{
		this->els[i] -= obj.els[i];
	}
	return *this;
}

Square & Square::operator()(int a)
{
	for (int i = 0;i<Size();i++) 
	{
		cout << els[i]+a <<  endl;
	}
	return *this;
}

int Square::Size()
{
	return this->size;
}

inline ostream & operator<<(ostream & os, Square & square)
{
	for (int i = 0; i < square.Size(); i++)
	{
		cout << square[i] << endl;
	}
	return os;
}

istream & operator >> (istream & is, Square & square)
{
	for (int i = 0;i < square.Size();i++)
	{
		is >> square.els[i];
	}
	return is;
}






Square::~Square()
{
	delete[]els;
}
