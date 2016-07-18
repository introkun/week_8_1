﻿#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int const size = 10;
	int masiv[size]{ -3, 5, -4, 9, 7, 2, -6, -8, 3, 6};
	
	cout << "вычисляем:\n"
		"• Сумму отрицательных элементов.\n"
		"• Произведение элементов, находящихся между min и max элементами.\n"
		"• Произведение элементов с четными номерами.\n"
		"• Сумму элементов, находящихся между первым и последним отрицательными элементами.\n"
		"исходные данные\n";
	
	for (int l = 0; l < size; l++)
	{
		cout << masiv[l] << " ";
	}
	cout << endl;
	// Не объявляйте переменные в одной строке
	int sum = 0, min = 0, max = 0, proiz = 1, proizChot = 1;
	// Не объявляйте переменные в одной строке
	int sumOtr = 0, otr1 = 0, otrPosl;
	for (int i = 0; i < size; i++)
	{
		if (min > masiv[i])
		{
			min = masiv[i];
		}
		// C "else if" ваша программа неправильно определяет максимум
		else if (max < masiv[i])
		{
			max = masiv[i];
		}
		if (masiv[i] < 0)
		{
			if (otr1 > 0)
			{
				sum += masiv[i];
			}
			sumOtr += masiv[i];
			otr1++;
			otrPosl = masiv[i];
		}
		if (masiv[i]%2 == 0)
		{
			proizChot *= masiv[i];
		}
	}
	for (int j = 0; j < size; j++)
	{
		if (masiv[j] > min && 
			masiv[j] < max)
		{
			proiz *= masiv[j];
		}
	}
	cout << "Сумма отрицательных элементов = " << sumOtr << endl
		<< "Произведение элементов, находящихся между min и max элементами = " << proiz << endl
		<< "Произведение элементов с четными номерами = " << proizChot << endl
		<< "Суммa элементов, находящихся между первым и последним отрицательными элементами = " << sum - otrPosl << endl;
}
