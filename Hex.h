#pragma once
#include "marray.h"

class Hex:
	public MArray
{
public:
	Hex(void);
	Hex(unsigned char n);
	virtual ~Hex(void);

	virtual MArray operator+(MArray& in_arr); // оператор поэлементного сложения массивов
};
