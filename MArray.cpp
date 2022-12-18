#include "MArray.h"

// конструктор по умолчанию
MArray::MArray() :len(0), arr(NULL)
{
}

// конструктор инициализации
MArray::MArray(int n) : len(n)
{
	arr = new char[n];
	for (int index = 0; index < n; index++)
	{
		arr[index] = 0;
	}
}


// деструктор
MArray::~MArray(void)
{
	delete[] arr;
}

// оператор индексирования
char& MArray::operator[](const int index)
{
	char ch = '\0';
	if (index < 0 || index > MAX)
		return ch;
	return arr[index];
}

// оператор вывода
ostream& operator<<(ostream& out, MArray& a)
{
	for (int index = 0; index < a.len; index++)
	{
		out << (int)a.arr[index] << ",";
	}
	out << endl;
	return out;
}

// оператор поэлементного сложения массивов
MArray MArray::operator+(MArray& in_arr)
{
	int max_len = max(length(), in_arr.length());
	MArray ret(max_len);

	int min_len = min(length(), in_arr.length());
	for (int index = 0; index < max_len; index++)
	{
		ret[index] = (index < min_len) ? arr[index] + in_arr.arr[index] :
			((min_len == length()) ? in_arr.arr[index] : arr[index]);
	}
	return ret;
}
