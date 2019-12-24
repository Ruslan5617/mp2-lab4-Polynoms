#include "Polynom.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	string str1, str2;
	int x;
	while (true)
	{
		cout << "Введите вервый полином: " << endl;
		cin >> str1;
		Polynom Pol1;
		Pol1.parse(str1);
		Pol1.normalize();
		cout << "Введите второй полином: " << endl;
		cin >> str2;
		Polynom Pol2;
		Pol2.parse(str2);
		Pol2.normalize();
		cout << "Сумма полиномов: " << endl;
		Polynom Pol3 = Pol1 + Pol2;
		Pol3.coutPol();
		cout << endl;
		cout << "Разность полиномов: " << endl;
		Pol3 = Pol1 - Pol2;
		Pol3.coutPol();
		cout << endl;
		cout << "Умножение полиномов :" << endl;
		Pol3 = Pol1 * Pol2;
		Pol3.coutPol();
		cout << endl;
		cout << "Введите Х:" << endl;
		cin >> x;
		cout << "Значение первого полинома при заданном Х: " << endl;
		cout << Pol1.calculate(x) << endl;
		cout << "Значение второго полинома при заданном Х: " << endl;
		cout << Pol2.calculate(x) << endl;
		cout << "Значение третьего полинома при заданном Х: " << endl;
		cout << Pol3.calculate(x) << endl;


		cout << "С Наступающим! :)" << endl;
	}

}