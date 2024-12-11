#include <iostream>
#include <D:\PROJECTS\DSTU\StaticLib\StaticLib\Header.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    int arr[] = { 5, 3, 9, 1, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Выводим исходный массив
    cout << "Исходный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Сортируем массив
    sort(arr, size);
    cout << "Отсортированный массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Ищем элемент в массиве
    int element;
    cout << "Введите элемент для поиска: ";
    cin >> element;
    int result = searchElement(arr, size, element);
    cout << "Полученный элемент: " << element << endl;

    // Вычисляем среднее значение
    double avg = average(arr, size);
    cout << "Среднее значение элементов массива: " << avg << endl;

    return 0;
}