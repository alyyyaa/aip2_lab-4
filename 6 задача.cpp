//Считатать из текстового файла целые числа и занести их в дек. Вывести дек на экран. Удалить из дека все элементы, значения которого меньше
//заданного значения k и вывести их на экран. Посчитать количество элементов в полученном деке, равных значению N.

#include <deque>
#include <iostream>
#include <fstream>
using namespace std;

void vvod(int& k, int& n)
{
    cout << "Введите число k: ";
    cin >> k;

    while (!cin.good()) {
        cin.clear();
        cin.ignore();
        cout << "k должно являться целым числом." << endl << "Введите значение k:" << endl;
        cin >> k;
    }
    cout << "Введите число n: ";
    cin >> n;
    while (!cin.good()) {
        cin.clear();
        cin.ignore();
        cout << "n должно являться целым числом." << endl << "Введите значение n:" << endl;
        cin >> n;
    }
}

int main()
{
	int x;
	deque <int> deq;
	deque <int> ::iterator p;
	ifstream f;

	int k, n, count = 0;


	f.open("C:\\Users\\Alena\\Desktop\\4 лаб\\Задача 6\\Задача 6\\file1.txt", ios::in);;
	if (!f) {
		cout << "Такого файла нет";
		return(0);
	}
	if (f.peek() == EOF)
	{
		cout << "Файл пуст";
		return(0);
	}
	while (!f.eof()) {
		f >> x;
		if (x < 0);
		deq.push_back(x);
	}
	cout << "Вывод дека:" << endl;
	for (p = deq.begin(); p < deq.end(); p++) {
		cout << *p << " ";
	}

	cout << endl;
	vvod(k, n);

	for (p = deq.begin(); p != deq.end();) {
		if (*p < k) {
			p = deq.erase(p);
		}
		else {
			++p;
		}
	}

	cout << "Измененный дек: " << endl;

	for (p = deq.begin(); p < deq.end(); p++)
	{
		if (*p == n)
		{
			count++;
		}
		cout << *p << " ";
	}

	cout << endl;
	cout << "Кол-во элементов равных N = " << count;
}