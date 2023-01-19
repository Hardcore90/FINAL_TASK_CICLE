#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Russian");
	// Создайте программу, которая среди n целочисленных элементов, 
	// введенных с клавиатуры, находит:
	//		минимальное и максимальное число
	//		составляет сумму элементов
	//		среднее арифметическое элементов.

	int n;
	printf("Сколько чисел вы хотите ввести: \n");
	scanf("%i", &n);

	printf("Введите числа: ");
	int a;
	scanf("%i", &a);

	int sum = a;
	int count = 1;
	int min = a;
	int max = a;
	for (int i = 2;i <= n;i++)
	{
		int b;
		scanf("%i", &b);
		sum = sum + b;    //  Сумма введенных чисел!
		count = count + 1;// Счетчик элементов для дальнейшего рассчета среднего арифм.
		
		if (b > max)	// Определение минимального и максимального элемента
		{
			max = b;
		}
		else
		{
			if (b < min)
			{
				min = b;
			}
		}
	}
	int average = sum / count;  // Нахождение среднего арифметического!
	printf("Минамальное число: %i , Максимальное число: %i !\n", min, max);
	printf("Сумма всех введенных чисел: %i\n", sum);
	printf("Среднее арифметическое введенных чисел: %i\n", average);
	printf("\n\n");
}
