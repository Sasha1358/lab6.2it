#include <iostream>
#include <time.h>
#include <Windows.h> 
#include <iomanip>
using namespace std;
void Create(int* a, const int size, const int Low, const int High, int i)
{
	a[i] = Low + rand() % (High - Low + 1);
	if (i < size - 1)
		Create(a, size, Low, High, i + 1);
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
}

double arithmeticmean(int* a, const int size)
{
	double sum = 0.0;
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (a[i] % 2 != 0) { // Перевірка на непарність
			sum += a[i];
			count++;
		}
	}

	if (count == 0) {
		return 0.0; // У випадку, коли немає непарних елементів
	}

	return sum / count; // Повертаємо середнє арифметичне непарних елементів
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	srand((unsigned)time(NULL));
	const int n = 25;
	int a[n];
	int Low = -20;
	int High = 30;

	Create(a, n, Low, High, 0);
	cout << "Масив = ["; Print(a, n);cout << "  ]" << endl;

	double average = arithmeticmean(a, n);
	cout << "Середнє арифметичне непарних елементів =  " << average << endl;

	return 0;
}