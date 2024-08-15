#include <iostream>

int main()
{
	//setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	system("title Foot to Metr");
	system("cls");
	double foot, metr;
	std::cout << "введите кол-во футов\n";
	std::cin >> foot;
	metr =  foot / 3.28;
	std::cout<< "тогда метров" << metr << "\n";
	system("pause");
	return 0;
}