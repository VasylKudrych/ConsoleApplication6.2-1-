// lab 6.2
#include <iostream>
#include <iomanip>

using namespace std;

void Print(int* a, const int size);
double Avarage(int* a, const int size, int min, int max);
void Create(int* a, const int size, const int High);

int main()
{
	srand((unsigned)time(0));

	const int n = 20;
	int a[n];
	Create(a, n, 100);
	cout << "start array = ";
	int min = a[0];
	int max = a[0];
	Print(a, n);
	cout << Avarage(a, n, min, max) << endl;
	
}

void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << '\n';
}

double Avarage(int* a, const int size, int min, int max) // модифікований метод бульбашки
{
	
	for (int i = 1; i < size; i++)
	{
		if (a[i] < min) min = a[i];
		if (a[i] > max) max = a[i];
	}
	return (min + max) / 2;
}

void Create(int* a, const int size, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = rand() % High;
}
