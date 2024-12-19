#include <iostream>

void sort(int* array, int arrLen)
{
    for (int i = 0; i < arrLen - 1; i++) {
        for (int j = 0; j < arrLen - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int searchElement(int* array, int arrLen, int index)
{
    for (int i = 0; i < arrLen; i++) {
        if (i == index) {
            return array[i];
        }
    }

    return 0;
}

double average(int* array, int arrLen)
{
    if (arrLen == 0) return 0;

    int sum = 0;
    for (int i = 0; i < arrLen; i++) {
        sum += array[i];
    }
    return double(sum) / arrLen;
}

// ������� ���-�� ����� ������ 10
int moreThan10(int* array, int arrLen)
{
    if (arrLen == 0) return 0;

    int count = 0;
    for (int i = 0; i < arrLen; i++) {
        if (array[i] > 10)
        {
            count += 1;
        }
    }
    return count;
}