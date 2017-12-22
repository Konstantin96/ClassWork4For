#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>
#include <time.h>
using namespace std;


void main()
{
	setlocale(LC_ALL, "Rus");
	HANDLE Hconsole;
	Hconsole = GetStdHandle(STD_OUTPUT_HANDLE);
nach:
	system("cls");
	int nz;
	SetConsoleTextAttribute(Hconsole, 15);
	cout << "-------------------------------------------------------" << endl;
	SetConsoleTextAttribute(Hconsole, 11);
	cout << "         Какой тест вы хотите пройти? \n";
	SetConsoleTextAttribute(Hconsole, 10);
	cout << " 1) На каком инструменте вы сможете играть! \n";
	SetConsoleTextAttribute(Hconsole, 14);
	cout << " 2) Какой язык программирования вы хотите выучить! \n";
	SetConsoleTextAttribute(Hconsole, 15);
	cout << "------------------------------------------------------" << endl;
	cin >> nz;

	if (nz == 1)

	{
	start:
		system("cls");
		int y;
		SetConsoleTextAttribute(Hconsole, 10);
		cout << "Хотите стать профессиональным музыкантом ? (0-нет; 1-да) ";
		cin >> y;

		if (y == 1)
		{
			SetConsoleTextAttribute(Hconsole, 2);
			cout << "Вы богаты? (0-нет; 1-да) ";
			cin >> y;
			if (y == 1)
			{
			lovemoney:
				SetConsoleTextAttribute(Hconsole, 11);
				cout << "Любите отрываться? (0-нет; 1-да) ";
				cin >> y;
				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 5);
					cout << "Пиво пьете? (0-нет; 1-да) ";
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 15);
						cout << "Хотите играть классику ? (0-нет; 1-да; 2-незнаю) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 3);
							cout << "... а джаз? (0-нет; 1-да) ";
							cin >> y;
							if (y == 0)
							{
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "У вас есть немецкие корни? (0-нет; 1-да) ";
								cin >> y;
								if (y == 0)
								{
									SetConsoleTextAttribute(Hconsole, 3);
									cout << "Значит вы играете на ДУДУК!" << endl;
									system("pause");
									goto nach;
								}
								else if (y == 1)
								{
									SetConsoleTextAttribute(Hconsole, 11);
									cout << "Значит вы играете на Трубе!" << endl;
									system("pause");
									goto nach;
								}
								else
								{
									SetConsoleTextAttribute(Hconsole, 4);
									cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
									system("pause");
									goto start;
								}
							}
							else if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 6);
								cout << "Ваш музыкальный инструмент Саксафон !" << endl;
								system("pause");
								goto nach;
							}
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 4);
							cout << "Готовы работать круглые сутки? (0-нет; 1-да) ";
							cin >> y;
							if (y == 0)
							{
								SetConsoleTextAttribute(Hconsole, 9);
								cout << "Готовы к тому, что будут проблемы с работой, даже если вы круто играете ? (0-нет; 1-да) ";
								cin >> y;
								if (y == 0)
								{
									SetConsoleTextAttribute(Hconsole, 5);
									cout << "Вы хотите играть на Валтроне !" << endl;
									system("pause");
									goto nach;
								}
								else if (y == 1)
								{
									SetConsoleTextAttribute(Hconsole, 2);
									cout << "Ваш музыкальный инструмент Кларнет !" << endl;
									system("pause");
									goto nach;
								}
								else
								{
									SetConsoleTextAttribute(Hconsole, 4);
									cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
									system("pause");
									goto start;
								}
							}
							else if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 3);
								cout << "Ваш музыкальный инструмент Гобой !" << endl;
								system("pause");
								goto nach;
							}
							else
							{
								SetConsoleTextAttribute(Hconsole, 4);
								cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
								system("pause");
								goto start;
							}
						}
						else if (y == 2)
						{
							SetConsoleTextAttribute(Hconsole, 14);
							cout << "Ваш музыкальный инструмент Тромбон !" << endl;
							system("pause");
							goto nach;
						}
						else
						{
							SetConsoleTextAttribute(Hconsole, 4);
							cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
							system("pause");
							goto start;
						}
					}

					else if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 13);
						cout << "Вы страстная натура? (0-нет; 1-да) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 8);
							cout << "Ваш музыкальный инструмент Домра !" << endl;
							system("pause");
							goto nach;
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 6);
							cout << "Ваш музыкальный инструмент Виолончель !" << endl;
							system("pause");
							goto nach;
						}
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
						system("pause");
						goto start;
					}
				}

				else if (y == 0)
				{
					SetConsoleTextAttribute(Hconsole, 13);
					cout << "Готовы заниматься по 8 часов в день? (0-нет; 1-да) ";
					cin >> y;
					if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 6);
						cout << "Ноты знаете? (0-нет; 1-да) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 5);
							cout << " Вы хотите играть на Альте! " << endl;
							system("pause");
							goto nach;
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 15);
							cout << " Вы хотите играть на Арфе! " << endl;
							system("pause");
							goto nach;
						}
					}
					else if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "Хотите учить детей? (0-нет; 1-да) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 5);
							cout << " Вы хотите играть на Скрипке! " << endl;
							system("pause");
							goto nach;
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 1);
							cout << " Вы хотите играть на Флейте! " << endl;
							system("pause");
							goto nach;
						}
					}
				}
				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
					system("pause");
					goto start;
				}

			}
			else if (y == 0)
			{
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "Любите деньги? (0-нет; 1-да) ";
				cin >> y;
				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << " Забудьте о музыке! " << endl;
					system("pause");
					goto nach;
				}
				else if (y == 0)
				{
					goto lovemoney;
				}
			}
			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
				system("pause");
				goto start;
			}
		}

		else if (y == 0)
		{
			SetConsoleTextAttribute(Hconsole, 5);
			cout << "Хотите встречаться с девушками? (0-нет; 1-да) ";
			cin >> y;
			if (y == 0)
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "Хотите встречаться с парнями? (0-нет; 1-да) ";
				cin >> y;
				if (y == 0)
				{
					SetConsoleTextAttribute(Hconsole, 10);
					cout << "Ваш инструмент фагот ! " << endl;
					system("pause");
					goto nach;
				}
				else if (y == 1)
				{
				paren:
					SetConsoleTextAttribute(Hconsole, 9);
					cout << "Вы парень ? (0-нет; 1-да) ";
					cin >> y;
					if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "Вы будете играть на ударных ! " << endl;
						system("pause");
						goto nach;
					}
					else if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 3);
						cout << "Вы оперный певец ! " << endl;
						system("pause");
						goto nach;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
						system("pause");
						goto start;
					}
				}
				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
					system("pause");
					goto start;
				}
			}
			else if (y == 1)
			{
				SetConsoleTextAttribute(Hconsole, 13);
				cout << "Вы любите глупышек? (0-нет; 1-да) ";
				cin >> y;
				if (y == 0)
				{
					goto paren;
				}
				else if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 2);
					cout << "Любите выпить? (0-нет; 1-да) ";
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 6);
						cout << "Ваш инструмент гитара ! " << endl;
						system("pause");
						goto nach;
					}
					else if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 7);
						cout << "Ваш инструмент фортопиано ! " << endl;
						system("pause");
						goto nach;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
						system("pause");
						goto start;
					}
				}
				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
					system("pause");
					goto start;
				}
			}
			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
				system("pause");
				goto start;
			}
		}

		else
		{
			SetConsoleTextAttribute(Hconsole, 4);
			cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
			system("pause");
			goto start;
		}
	}

	if (nz == 2)

	{
	programm:
		system("cls");
		int y;
		SetConsoleTextAttribute(Hconsole, 14);
		cout << "Зачем вы хотите изучить программирование ? " << endl;
		SetConsoleTextAttribute(Hconsole, 10);
		cout << "1) Для детей " << endl;
		cout << "2) Заработать " << endl;
		cout << "3) Я не знаю выберите за меня " << endl;
		cout << "4) Поразвлечься, интересно, саморазвитие " << endl;
		cin >> y;

		if (y == 1)
		{
			SetConsoleTextAttribute(Hconsole, 5);
			cout << "Начните со Scratch, затем PYTHON!" << endl;
			system("pause");
			goto nach;
		}

		else if (y == 2)
		{
			SetConsoleTextAttribute(Hconsole, 10);
			cout << "1) Найти работу " << endl;
			SetConsoleTextAttribute(Hconsole, 13);
			cout << "2) У меня есть идея для стартапа! " << endl;
			cin >> y;

			if (y == 1)
			{
				SetConsoleTextAttribute(Hconsole, 5);
				cout << "Какая платформа/сфера? " << endl;
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "1) Я хочу работать в крупной IT-компании " << endl;
				cout << "2) Я просто хочу $$$" << endl;
				cout << "3) Веб" << endl;
				cout << "4) Корп.софт" << endl;
				cout << "5) Мобильная" << endl;
				cout << "6) 3D/игры" << endl;
				cin >> y;

				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 20);
					cout << "1) Facebook " << endl;
					SetConsoleTextAttribute(Hconsole, 13);
					cout << "2) GOOGLE" << endl;
					SetConsoleTextAttribute(Hconsole, 3);
					cout << "3) Windows" << endl;
					SetConsoleTextAttribute(Hconsole, 14);
					cout << "4) Apple" << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 11);
						cout << "Вам нужно изучать язык PYTHON" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 11);
						cout << "Вам нужно изучать язык PYTHON" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 3)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "Вам нужно изучать язык C#" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 4)
					{
						SetConsoleTextAttribute(Hconsole, 5);
						cout << "Вам нужно изучать язык Objective-C" << endl;
						system("pause");
						goto nach;
					}
				}

				else if (y == 2)
				{
					SetConsoleTextAttribute(Hconsole, 12);
					cout << "Вам нужно изучать JAVA" << endl;
					system("pause");
					goto nach;
				}

				else if (y == 3)
				{
					SetConsoleTextAttribute(Hconsole, 15);
					cout << "1) Фронтенд (веб-интерфейс) " << endl;
					SetConsoleTextAttribute(Hconsole, 20);
					cout << "2) Бэкенд (то, что за вэбсайтом) " << endl;
					cin >> y;

					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 13);
						cout << "Вам нужно изучать JAVASCRIPT" << endl;
						system("pause");
						goto nach;
					}

					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "Хочу работать на ..." << endl;
						SetConsoleTextAttribute(Hconsole, 6);
						cout << "1) корпорацию " << endl;
						cout << "2) стартап " << endl;
						cin >> y;

						if (y == 1)
						{
						micro:
							SetConsoleTextAttribute(Hconsole, 9);
							cout << "Что скажите о Microsoft ?" << endl;
							cout << "1) Люблю его " << endl;
							cout << "2) Неплохо " << endl;
							cout << "3) Фууу " << endl;
							cin >> y;
							if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 10);
								cout << "Вам нужно изучать C#" << endl;
								system("pause");
								goto nach;
							}
							else if (y == 2)
							{
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "Вам нужно изучать JAVA" << endl;
								system("pause");
								goto nach;
							}
							else if (y == 3)
							{
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "Вам нужно изучать JAVA" << endl;
								system("pause");
								goto nach;
							}
						}

						else if (y == 2)
						{
						trud:
							SetConsoleTextAttribute(Hconsole, 14);
							cout << "Хотите попробывать что то новое, но не очень трудоемкое? " << endl;
							SetConsoleTextAttribute(Hconsole, 6);
							cout << "1-ДА, 2-НЕТ,НЕЗНАЮ" << endl;
							cin >> y;
							if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 13);
								cout << "Вам нужно изучать JAVASCRIPT" << endl;
								system("pause");
								goto nach;
							}
							else if (y == 2)
							{
								SetConsoleTextAttribute(Hconsole, 14);
								cout << "Какая у вас любимая игрушка? " << endl;
								SetConsoleTextAttribute(Hconsole, 13);
								cout << "1) LEGO" << endl;
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "2) Пластилин" << endl;
								SetConsoleTextAttribute(Hconsole, 11);
								cout << "3) Старенький но любимый мишка" << endl;
								cin >> y;
								if (y == 1)
								{
									SetConsoleTextAttribute(Hconsole, 14);
									cout << "Вам нужно изучать PYTHON" << endl;
									system("pause");
									goto nach;
								}

								else if (y == 2)
								{
									SetConsoleTextAttribute(Hconsole, 12);
									cout << "Вам нужно изучать RUBY" << endl;
									system("pause");
									goto nach;
								}

								else if (y == 3)
								{
									SetConsoleTextAttribute(Hconsole, 20);
									cout << "Вам нужно изучать PHP" << endl;
									system("pause");
									goto nach;
								}

								else
								{
									SetConsoleTextAttribute(Hconsole, 4);
									cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
									system("pause");
									goto programm;
								}
							}

							else
							{
								SetConsoleTextAttribute(Hconsole, 4);
								cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
								system("pause");
								goto programm;
							}
						}

						else
						{
							SetConsoleTextAttribute(Hconsole, 4);
							cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
							system("pause");
							goto programm;
						}
					}
				}

				else if (y == 4)
				{
					goto micro;
				}

				else if (y == 5)
				{
				mobile:
					SetConsoleTextAttribute(Hconsole, 13);
					cout << "Какая OS? " << endl;
					SetConsoleTextAttribute(Hconsole, 14);
					cout << "1) IOS " << endl;
					cout << "2) Android" << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 5);
						cout << "Вам нужно изучать OBJECTIVE-C" << endl;
						system("pause");
						goto nach;
					}

					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 12);
						cout << "Вам нужно изучать JAVA" << endl;
						system("pause");
						goto nach;
					}

					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
						system("pause");
						goto programm;
					}
				}

				else if (y == 6)
				{
				game:
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "Вам нужно изучать C++" << endl;
					system("pause");
					goto nach;
				}

				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
					system("pause");
					goto programm;
				}
			}

			else if (y == 2)
			{
			sfera:
				SetConsoleTextAttribute(Hconsole, 9);
				cout << "Какая платформа/сфера? " << endl;
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "1) 3D/игры" << endl;
				cout << "2) Мобильная" << endl;
				cout << "3) Корп.софт" << endl;
				cout << "4) Веб" << endl;
				cin >> y;

				if (y == 1)
				{
					goto game;
				}

				else if (y == 2)
				{
					goto mobile;
				}

				else if (y == 3)
				{
					goto micro;
				}

				else if (y == 4)
				{
					SetConsoleTextAttribute(Hconsole, 14);
					cout << "Ваш сервис будет работать в реальном времени, как twitter?  " << endl;
					SetConsoleTextAttribute(Hconsole, 10);
					cout << "1 - ДА, 2-НЕТ " << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 13);
						cout << "Вам нужно изучать JAVASCRIPT" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 2)
					{
						goto trud;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
						system("pause");
						goto programm;
					}
				}

				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
					system("pause");
					goto programm;
				}

			}

			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
				system("pause");
				goto programm;
			}

		}

		else if (y == 3)
		{
			SetConsoleTextAttribute(Hconsole, 11);
			cout << "Изучайте PYTHON !" << endl;
			system("pause");
			goto nach;
		}

		else if (y == 4)
		{
			SetConsoleTextAttribute(Hconsole, 14);
			cout << "Уже есть идея на миллион ? " << endl;
			SetConsoleTextAttribute(Hconsole, 10);
			cout << "1) Да " << endl;
			SetConsoleTextAttribute(Hconsole, 12);
			cout << "2) Нет. просто хочу начать " << endl;
			cin >> y;

			if (y == 1)
			{
				goto sfera;
			}

			else if (y == 2)
			{
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "Мне нравится учиться... " << endl;
				SetConsoleTextAttribute(Hconsole, 10);
				cout << "1) Простым способом " << endl;
				cout << "2) Лучшим способом " << endl;
				cout << "3) Трудненьким способом " << endl;
				cout << "4) Очень сложный путь(но потом будет легче) " << endl;
				cin >> y;

				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "Вам нужно изучать язык PYTHON" << endl;
					system("pause");
					goto nach;
				}

				else if (y == 2)
				{
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "Вам нужно изучать язык PYTHON" << endl;
					system("pause");
					goto nach;
				}

				else if (y == 3)
				{
					SetConsoleTextAttribute(Hconsole, 14);
					cout << "Какая коробка передач? " << endl;
					SetConsoleTextAttribute(Hconsole, 10);
					cout << "1) Автомат" << endl;
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "2) Ручная" << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 12);
						cout << "Вам нужно изучать язык JAVA" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 11);
						cout << "Вам нужно изучать язык C " << endl;
						system("pause");
						goto nach;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
						system("pause");
						goto programm;
					}
				}

				else if (y == 4)
				{
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "Вам нужно изучать язык c++" << endl;
					system("pause");
					goto nach;
				}

				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
					system("pause");
					goto programm;
				}
			}

			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
				system("pause");
				goto programm;
			}
		}

		else
		{
			SetConsoleTextAttribute(Hconsole, 4);
			cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
			system("pause");
			goto programm;
		}
	}

	else
	{
		SetConsoleTextAttribute(Hconsole, 4);
		cout << "Вы ввели не корректный ответ, попробуйте еще раз" << endl;
		system("pause");
		goto nach;
	}

}




















