#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int const size = 10;
	int masiv[]{ 25, 13, 31, 8, 1, 45, 29, 56, 21, 48};
	int min = masiv[0];
	int max = masiv[0];

	for (int i = 0; i < size; i++)
	{
		if (min > masiv[i])
		{
			min = masiv[i];
		}
		else if (max < masiv[i])
		{
			max = masiv[i];
		}
	}
	cout << "находим максимальное и минимальное значение из масива " << endl << "минимум = " << min << endl << "максимум = " << max << endl;
}