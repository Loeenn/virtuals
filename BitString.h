#include "marray.h"

class BitString : public MArray
{
public:
	BitString(void);
	BitString(int n);
	virtual ~BitString(void);

	virtual MArray operator+(MArray& in_arr); // оператор поэлементного сложения массивов
};
#pragma once
