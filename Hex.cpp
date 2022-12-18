#include "Hex.h"
#include <iostream>
#include <string >
using namespace std;
// конструктор по умолчанию
Hex::Hex(void) : MArray()
{
}

// конструктор инициализации
Hex::Hex(unsigned char n) : MArray(n)
{
}

// деструктор
Hex::~Hex(void)
{
}

// оператор поэлементного сложения массивов
MArray Hex::operator+(MArray& in_arr)
{
	int max_len = max(length(), in_arr.length());
	MArray ret(max_len);

	int min_len = min(length(), in_arr.length());
	for (int index = 0; index < max_len; index++)
	{
		//перевод в 10чную
            std::string stroka(reinterpret_cast<char*>(in_arr.arr[index]));
            std::string sim = "";
            std::string::reverse_iterator rit;
            int base_n = 10, n = 0, n10 = 0, res = 0;
            int size_str = stroka.length();
            cout << stroka << " = " << size_str << endl;
            for (rit = stroka.rbegin(); rit < stroka.rend(); rit++)sim += *rit;
            cout << sim << endl;
            for (int i = 0; i < size_str; i++)
            {
                if (sim[i] <= 57)
                {
                    res += ((int)sim[i] - 48) * (int)pow((double)base_n, i);
                }
                else
                {
                    res += ((int)sim[i] - 55) * (int)pow((double)base_n, i);
                }
            }
            cout << endl;
            
		ret[index] = (index < min_len) ? arr[index] + res :
			((min_len == length()) ? res : arr[index]);
	}
	return ret;
}
