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
		cout << "������� ����� �������: ";
		cin >> n;
		cout << endl;

		switch (n)
		{
			case 1:
			{
				/*1. ��� ������. ������� �� ����� ������� ��� ��������������� ��������,
				����� �������������*/

				int A[10];

					for (i = 0; i < 10; i++)
					{
						A[i] = 10 - rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
					}

					cout << endl;
					cout << "��������������� �������� �������:" << endl;
					cout << endl;

					for (i = 0; i < 10; i++)
					{
						if (A[i]>0)
							cout << "A[" << i << "]=" << A[i] << endl;
					}

					cout << endl;
					cout << "������������� �������� �������:" << endl;
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
				/*2. � ������� �������� ���������� � ���������� �����,
				���������� 20 ����������� ���������.
				���������� ������ ������, ������� ������ ���� �����.*/

				int A[20], count;

					for (i = 0; i < 20; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
					}

					cout << endl;
					cout << "������� ������� ������ ���� �����:" << endl;
					cout << endl;

					count = 0;

					for (i = 0; i < 20; i++)
					{
						if (A[i] < 3)
						{
							cout << "������� �" << i + 1 << " ����� " << A[i] << " ���������� �����." << endl;
							count++;
						}
					}

					if (count == 0)
					cout << "������, ������� ������ ���� ����� ���." << endl;

				system("pause");
				system("cls");

			}
			break;

			case 3:
			{
				/*3. ������ ������, ��������� �� 14 ��������� ������ ����.
				����� ���������� ��������� ������ �� ��������.*/

				int A[14], count;

					count = 0;

					for (i = 0; i < 14; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
						if (A[i] % 2 == 0) count++;
					}

					cout << endl;
					cout << "���������� ��������� ������ �� ��������: " << count << endl;

				system("pause");
				system("cls");

			}
			break;

			case 4:
			{
				/*4. ������ ������, ��������� �� 12 ��������� ������ ����.
				�������� ����� ������, ������� �������� ������ ��������
				�������������������� ��������� �������   */

				int A[12], sum;
				double average;

				sum = 0;

					cout << "�������� ������: " << endl;

					for (i = 0; i < 12; i++)
					{
						A[i] = 1 + rand() % 30;
						cout << "A[" << i << "]=" << A[i] << endl;
						sum += A[i];
					}

					average = sum / 12;

					cout << endl;
					cout << "�������������������� ��������� �������: " << average << endl;
					cout << endl;

					A[4] = average;

					cout << "���������� ������: " << endl;

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
				/*5. ����� ������, ��������� �� 15 ��������� ������������� ����.
				���������� ���������� ���������, �������� ������� ������ ������� ��������*/

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
					cout << "���������� ���������, �������� ������� ������ ������� ��������: " << count << endl;

				system("pause");
				system("cls");

			}
			break;

		}

	} while (n != 0);

}