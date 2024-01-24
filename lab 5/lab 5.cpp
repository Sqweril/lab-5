#include <iostream>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include "Solder.h"


int Voen::voenCounter = 0;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//5-ая лабораторная
	//1. Пример работы с исключениями
	Voen vn;

	try
	{
		vn.Input();
	}
	catch (const std::invalid_argument& ex)
	{
		std::cout << ex.what() << std::endl;
	}


	//2. Пример работы с одномерными и двумерными массивами
	Voen ve[3];
	int en;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "Введите кол-во посещений: ";
		std::cin >> en;
		ve[i] = ve[i] + en;
		ve[i].Print();
	}
	Vus pt[2][2];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			pt[i][j].Input();
	std::cout << "Направление студента призывного возраста: ";
	std::cout << pt[0][1].Getnaprav() << std::endl;
}
