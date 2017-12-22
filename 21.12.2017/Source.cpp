#include <stdio.h>
#include <iostream>
#include <locale.h>
#include <ctime>
#include <math.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	do
	{
		system("cls");
		int nz;
		cout << "Vvedite nomer zadaniya ";
		cin >> nz;
		switch (nz)
		{
		case 1:
		{
			/* Возвести числа A в целую степень N*/
			int a, n, sum;
			cout << "Vvedite chislo a ";
			cin >> a;
			cout << "Vvedite chislo n ";
			cin >> n;
			for (int i = 1; i <= n; i++)
			{
				sum = pow(a, i);
				cout << a << " v stepeni " << i << " = " << sum << endl;
			}
		}
		break;

		case 2:
		{
			/*
			В области n районов. Известны количество жителей каждого
			района (в тысячах человек) и плотность населения в нем
			(тыс. чел./км2). Определить общую площадь территории области
			*/
			int ra, obl, chel;
			float pl;
			cout << "Vvedite kol-vo oblastey: ";
			cin >> obl;
			int totalpeople = 0, totalOblPeople = 0;
			float totalploshad = 0, totalOblPloshad = 0;
			srand(time(NULL));

			for (int i = 1; i <= obl; i++)
			{
				totalpeople = 0;
				totalploshad = 0;

				ra = 1 + rand() % 9;

				/*cout << "Vvedite kol-vo raionov v " << i << " oblati: ";
				cin >> ra;*/

				for (int j = 1; j <= ra; j++)
				{
					/*cout << "Skol'ko chelovek zhivet v rayone " << j << ": ";
					cin >> chel;
					cout << "Vvedite ploshad' rayona: ";
					cin >> pl;*/
					chel = 1 + rand() % 899999;
					pl = 1 + rand() % 899999;
					totalpeople += chel;
					totalploshad += pl;
				}

				cout << "Vsego v rayone zhivet " << totalpeople << endl;
				cout << "Vsego ploshad' " << totalploshad << endl;

				totalOblPeople += totalpeople;
				totalOblPloshad += totalploshad;
			}

			cout << endl;
			cout << "------------------------------------------------------------" << endl;
			cout << "Vsego vo vseh rayonah zhivet " << totalOblPeople << endl;
			cout << "Ploshad' vseh rayonov " << totalOblPloshad << endl;
			cout << "------------------------------------------------------------" << endl;
			cout << endl;
			totalploshad = totalOblPeople / totalOblPloshad;
			cout << "Ploshad' vseh rayonov " << totalploshad << endl;
			cout << "------------------------------------------------------------" << endl;
			cout << endl;
			system("pause");

		}
		break;

		case 3:
		{
			/* Вычислить факториал заданного целого числа. Факториал числа N вычисляется по следующей формуле:  N!=1·2·3···N.*/
			int a, sum = 1;
			cout << "Vvedite chislo povtorov : ";
			cin >> a;
			for (int i = 1; i <= a; i++)
			{
				sum *= i;
				cout << sum << endl;
			}
		}
		break;

		case 4:
		{
			/* Вычислить сумму S квадратов чисел от 1 до N.*/
			int s, sum = 0;
			cout << "Vvedite kol-vo povtoreniy : ";
			cin >> s;

			for (int i = 1; i <= s; i++)
			{
				sum += pow(i, 2);

				cout << sum << endl;
			}
		}
		break;

		case 5:
		{
			/*
			Найти все числа некратные пяти и кратные 3,
			и сумма цифр которых также некратные пяти и кратна 3.
			*/
			int sum = 0, sum2 = 0;
			int n = 1569 + rand() % 698506;
			cout << n << endl;
			cout << endl;
			for (int i = 1; i <= n; i++)
				if ((i % 5) != 0 && (i % 3) == 0)
					sum += i;
				else if ((i % 5) == 0 && (i % 3) != 0)
					sum2 += i;

			cout << sum << endl;
			cout << endl;
			cout << sum2 << endl;

		}
		break;

		case 6:
		{
			/*Найти все числа кратные пяти для чисел от 1 до N.*/
			int n = 1 + rand() % 9999;

			for (int i = 1; i <= n; i++)
				if (!(i % 5))
					cout << i << endl;
		}
		break;

		case 7:
		{
			/* Является ли заданное натуральное число степенью двойки?*/
			int n = 1 + rand() % 99;
			for (int i = 1; i <= n; i++)
				if (sqrt(n))
					cout << i << endl;
		}
		break;

		case 8:
		{
			/*
			Число, равное сумме всех своих делителей, включая единицу,
			называется совершенным.
			Найти и напечатать все совершенные числа в интервале от 2 до х.
			*/
			int x, sdel = 1, sum;
			cout << "Vvedite chislo povtorov : ";
			cin >> x;
			for (int i = 2; i <= x; i++)
			{
				sum = 0;
				for (int j = 1; j < i; j++)
					if ((i%j) == 0)
						sum += j;

				if (sum == i)
				{
					cout << "Summa sovershenaya " << i << endl;
				}
			}
		}
		break;

		case 9:
		{
			/* Гражданин 1 марта открыл счет в банке, вложив n тенге.
			Через каждый месяц размер вклада увеличивается на p% от имеющейся суммы.
			Определить:
			a.	за какой месяц величина ежемесячного увеличения вклада превысит 30 тенге.;
			b.	через сколько месяцев размер вклада превысит 1200 тенге.
*/
			int n, p, ezhp = 0, month = 0;
			float pp=1.6;
			cout << "Vvedite summu vklada : ";
			cin >> n;
			p = 1 + rand() % 4;
			cout << "% vklada = " << pp << endl;

			while (ezhp <= 300)
			{
				ezhp += n*pp / 100;
				month++;
			}
			cout << ezhp+n << endl;
			cout << " za " << month << " mesica" << endl;
		}
		break;

		default:
			break;
		}
		system("pause");
	} while (true);
}