#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int ishod, part_1 = 0, part_2 = 0;
	setlocale(LC_ALL, "Rus");

	cout << "Введите номер билета, состоящий строго из 6 цифр ";
	cin >> ishod;

	if ((ishod < 100000) || (ishod >= 1000000))
	{
		cout << "Вы ввели не шетизначное число. Программа закончена";
	}
	else
	{
		part_2 += ishod % 10;
		ishod /= 10;
		part_2 += ishod % 10;
		ishod /= 10;
		part_2 += ishod % 10;
		ishod /= 10;
		part_1 += ishod % 10;
		ishod /= 10;
		part_1 += ishod % 10;
		ishod /= 10;
		part_1 += ishod % 10;
		ishod /= 10;

		if (part_1 == part_2)
		{
			cout << "Ваш билет счастливый! Поздравляем!!";
		}
		else
		{
			cout << "Вам выпал несчастливый билет :(";
		}
	}

	return 0;

}
