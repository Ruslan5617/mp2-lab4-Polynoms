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
		cout << "������� ������ �������: " << endl;
		cin >> str1;
		Polynom Pol1;
		Pol1.parse(str1);
		Pol1.normalize();
		cout << "������� ������ �������: " << endl;
		cin >> str2;
		Polynom Pol2;
		Pol2.parse(str2);
		Pol2.normalize();
		cout << "����� ���������: " << endl;
		Polynom Pol3 = Pol1 + Pol2;
		Pol3.coutPol();
		cout << endl;
		cout << "�������� ���������: " << endl;
		Pol3 = Pol1 - Pol2;
		Pol3.coutPol();
		cout << endl;
		cout << "��������� ��������� :" << endl;
		Pol3 = Pol1 * Pol2;
		Pol3.coutPol();
		cout << endl;
		cout << "������� �:" << endl;
		cin >> x;
		cout << "�������� ������� �������� ��� �������� �: " << endl;
		cout << Pol1.calculate(x) << endl;
		cout << "�������� ������� �������� ��� �������� �: " << endl;
		cout << Pol2.calculate(x) << endl;
		cout << "�������� �������� �������� ��� �������� �: " << endl;
		cout << Pol3.calculate(x) << endl;


		cout << "� �����������! :)" << endl;
	}

}