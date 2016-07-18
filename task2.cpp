#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	// monthCount
	int const month = 12;
	int masiv[month];
	int l, k;
	cout << "введите прибль за каждый месяц" << endl;
	for (int i = 0; i < month; i++)				//заполнение масива
	{
		cout << "месяц " << i + 1 << " = ";
		cin >> masiv[i];
	}

	int monthMin, monthMax;

	cout << "выбирите диапозон месецов в котором определяем максимальное значение\nс ";
	cin >> monthMin;
	cout << "до ";
	cin >> monthMax;

	int min = masiv[monthMin];
	int max = masiv[monthMin];

	for (; monthMin <= monthMax; monthMin++)
	{
		if (min > masiv[monthMin])
		{
			min = masiv[monthMin];
			k = monthMin;
		}
		else if (max < masiv[monthMin])
		{
			max = masiv[monthMin];
			l = monthMin;
		}
	}
	cout << "максимальна прибыль в " << l + 1 << " месяце составила = " << max << endl
		<< "минимальна  прибыль в " << k + 1 << " месяце составила = " << min << endl;
}
