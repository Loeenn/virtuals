#include "marray.h"

class BitString : public MArray
{
public:
	BitString(void);
	BitString(int n);
	virtual ~BitString(void);

	virtual MArray operator+(MArray& in_arr); // �������� ������������� �������� ��������
};
#pragma once
