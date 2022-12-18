#include "BitString.h"

// ����������� �� ���������
BitString::BitString() : MArray()
{
}

// ����������� �������������
BitString::BitString(int n) : MArray(n)
{
}

// ����������
BitString::~BitString(void)
{
}

// �������� ������������� �������� ��������
MArray BitString::operator+(MArray& in_arr)
{
    int max_len = max(length(), in_arr.length());
    MArray ret(max_len);

    int min_len = min(length(), in_arr.length());
    for (int index = 0; index < max_len; index++)
    {
        //������� � 2�����
        int res = 0, k = 1;

        while (in_arr[index])
        {
            res += (in_arr[index] % 2) * k;
            k *= 10;
            in_arr[index] /= 2;
        }

        ret[index] = (index < min_len) ? arr[index] + res :
            ((min_len == length()) ? res : arr[index]);
    }
    return ret;
}
