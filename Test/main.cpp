#include <iostream>
#include <D:\PROJECTS\DSTU\StaticLib\StaticLib\Header.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int arr[] = { 5, 31, 10, 12, 45 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "�������� ������: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    sort(arr, size);
    cout << "��������������� ������: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int element;
    cout << "������� ������� ��� ������: ";
    cin >> element;
    int result = searchElement(arr, size, element);
    cout << "���������� �������: " << element << endl;

    double avg = average(arr, size);
    cout << "������� �������� ��������� �������: " << avg << endl;

    int countMoreThan10 = moreThan10(arr, size);
    cout << "���-�� ����� ������ 10: " << countMoreThan10 << endl;

    return 0;
}