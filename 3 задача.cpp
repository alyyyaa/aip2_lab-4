//Считать из текстового файла целые числа и занести их в вектор. Вывести вектор на экран. Вставить перед всеми отрицательными
//элементами вектора значение 0 и снова вывести вектор на экран.

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	int x;
	vector <int> vec;
	vector <int> ::iterator p;
	ifstream f;

	f.open("C:\\Users\\Alena\\Desktop\\4 лаб\\3 задача\\3 задача\\file.txt", ios::in);
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
		vec.push_back(x);
	}
	cout << "Изначальный вектор: " << endl;
	for (p = vec.begin(); p < vec.end(); p++) {
		cout << *p << " ";
	}

	cout << endl;

	cout << "Измененный вектор: " << endl;

	for (p = vec.begin(); p < vec.end(); p++)
	{
		if (*p < 0)
		{
			cout << "0" << " ";
		}
		cout << *p << " ";
	}
}