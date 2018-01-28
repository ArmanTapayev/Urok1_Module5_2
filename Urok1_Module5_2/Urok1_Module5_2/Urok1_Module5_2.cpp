#include <stdio.h>
#include <stdlib.h> 
#include <iostream>
#include <locale.h>
#include <time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	system("color 1A");
	srand(time(NULL));

	int n, i, j;

	do
	{
		cout << "Введите номер задания: ";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
			{
				/*1. Дан массив. Вывести на экран сначала его неотрицательные элементы,
				затем отрицательные*/

				int A[10];

					for (i = 0; i < 10; i++)
					{
						A[i] = 10 - rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
					}

					cout << endl;
					cout << "Неотрицательные элементы массива:" << endl;
					cout << endl;

					for (i = 0; i < 10; i++)
					{
						if (A[i]>0)
							cout << "A[" << i << "]=" << A[i] << endl;
					}

					cout << endl;
					cout << "Отрицательные элементы массива:" << endl;
					cout << endl;

					for (i = 0; i < 10; i++)
					{
						if (A[i]<0)
							cout << "A[" << i << "]=" << A[i] << endl;
					}

				system("pause");
				system("cls");

			}

			break;

			case 2:
			{
				/*2. В массиве хранится информация о количестве побед,
				одержанных 20 футбольными командами.
				Определить номера команд, имеющих меньше трех побед.*/

				int A[20], count;

					for (i = 0; i < 20; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
					}

					cout << endl;
					cout << "Команды имеющие меньше трех побед:" << endl;
					cout << endl;

					count = 0;

					for (i = 0; i < 20; i++)
					{
						if (A[i] < 3)
						{
							cout << "Команда №" << i + 1 << " имеет " << A[i] << " количество побед." << endl;
							count++;
						}
					}

					if (count == 0)
					cout << "Команд, имеющих меньше трех побед нет." << endl;

				system("pause");
				system("cls");

			}
			break;

			case 3:
			{
				/*3. Ввести массив, состоящий из 14 элементов целого типа.
				Найти количество элементов четных по значению.*/

				int A[14], count;

					count = 0;

					for (i = 0; i < 14; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
						if (A[i] % 2 == 0) count++;
					}

					cout << endl;
					cout << "Количество элементов четных по значению: " << count << endl;

				system("pause");
				system("cls");

			}
			break;

			case 4:
			{
				/*4. Ввести массив, состоящий из 12 элементов целого типа.
				Получить новый массив, заменив значение пятого элемента
				среднеарифметическим исходного массива   */

				int A[12], sum;
				double average;

				sum = 0;

					cout << "Исходный массив: " << endl;

					for (i = 0; i < 12; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
						sum += A[i];
					}

					average = sum / 12;

					cout << endl;
					cout << "Среднеарифметическое исходного массива: " << average << endl;
					cout << endl;

					A[4] = average;

					cout << "Измененный массив: " << endl;

					for (i = 0; i < 12; i++)
					{
						cout << "A[" << i << "]=" << A[i] << endl;
					}

				system("pause");
				system("cls");

			}
			break;

			case 5:
			{
				/*5. Задан массив, состоящий из 15 элементов вещественного типа.
				Определить количество элементов, значения которых больше первого элемента*/

				int count;
				double A[15];

					count = 0;

					for (i = 0; i < 15; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
						if (A[0] < A[i]) count++;
					}

					cout << endl;
					cout << "Количество элементов, значения которых больше первого элемента: " << count << endl;

				system("pause");
				system("cls");

			}
			break;

		}

	} while (n != 0);

}