#include <iostream>
#include <D:\PROJECTS\DSTU\StaticLib\StaticLib\Header.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int arr[] = { 5, 3, 9, 1, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // ������� �������� ������
    cout << "�������� ������: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ��������� ������
    sort(arr, size);
    cout << "��������������� ������: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ���� ������� � �������
    int element;
    cout << "������� ������� ��� ������: ";
    cin >> element;
    int result = searchElement(arr, size, element);
    cout << "���������� �������: " << element << endl;

    // ��������� ������� ��������
    double avg = average(arr, size);
    cout << "������� �������� ��������� �������: " << avg << endl;

    return 0;
}