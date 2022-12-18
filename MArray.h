#pragma once
#include <iostream>
using namespace std;

class MArray
{
	static const int MAX = 512; // ������������ ����� �������
public: char* arr; // ������
	int len; // ����� �������
public:
	MArray(); // ����������� �� ���������
	MArray(int n); // ����������� �������������
	virtual ~MArray(void); // ����������

	int length() { return len; }

	char& operator[](const int index); // �������� ��������������
	friend ostream& operator<<(ostream& out, MArray& a); // �������� ������

	virtual MArray operator+(MArray& in_arr); // �������� ������������� �������� ��������
};
