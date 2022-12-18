#pragma once
#include <iostream>
using namespace std;

class MArray
{
	static const int MAX = 512; // максимальная длина массива
public: char* arr; // массив
	int len; // длина массива
public:
	MArray(); // конструктор по умолчанию
	MArray(int n); // конструктор инициализации
	virtual ~MArray(void); // деструктор

	int length() { return len; }

	char& operator[](const int index); // оператор индексирования
	friend ostream& operator<<(ostream& out, MArray& a); // оператор вывода

	virtual MArray operator+(MArray& in_arr); // оператор поэлементного сложения массивов
};
