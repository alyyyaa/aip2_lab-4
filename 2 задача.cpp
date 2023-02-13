/*Реализовать набор основных действий для работы с вектором в виде программы,
имеющей следующий интерфейс:
Выберите действие:
1.Добавить элемент
2.Удалить элемент
3.Вывести элемент с номером N
4.Вывести содержимое вектора
7.Вывести количество элементов
8.Очистить вектор
9.Выход*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> vec;
	int action;
	cout << "Выберите действие для работы с вектором: " << endl;
    cout << "1.Добавить элемент" << endl;
    cout << "2.Удалить элемент" << endl;
    cout << "3.Вывести элемент с номером N" << endl;
    cout << "4.Вывести содержимое вектора" << endl;
    cout << "5.Вывести количество элементов" << endl;
    cout << "6.Очистить вектор" << endl;
    cout << "7.Выход" << endl;
    cin >> action;
    switch (action)
    {
    case 1:
        int number;
        cout << "Введите число: ";
        cin >> number;
        vec.push_back(number);
        break;
    case 2:
        vec.pop_back();
        break;
    case 3:
        int N;
        cout << "Введите номер элемента: ";
        cin >> N;
        cout << vec.at(N);
        break;
    case 4:
        cout << "Вывод содержимого вектора: ";
        for (auto i = vec.begin(); i < vec.end(); i++)  cout << *i << " ";
        break;
    case 5:
        cout << "Вывод количества элементов: ";
        cout << vec.size();
        break;
    case 6:
        cout << "Очистка вектора: ";
        vec.clear();
        break;
    case 7:
        cout << "До свидания!";
        return 0;
        break;
    }
}