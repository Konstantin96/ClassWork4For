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
	cout << "         ����� ���� �� ������ ������? \n";
	SetConsoleTextAttribute(Hconsole, 10);
	cout << " 1) �� ����� ����������� �� ������� ������! \n";
	SetConsoleTextAttribute(Hconsole, 14);
	cout << " 2) ����� ���� ���������������� �� ������ �������! \n";
	SetConsoleTextAttribute(Hconsole, 15);
	cout << "------------------------------------------------------" << endl;
	cin >> nz;

	if (nz == 1)

	{
	start:
		system("cls");
		int y;
		SetConsoleTextAttribute(Hconsole, 10);
		cout << "������ ����� ���������������� ���������� ? (0-���; 1-��) ";
		cin >> y;

		if (y == 1)
		{
			SetConsoleTextAttribute(Hconsole, 2);
			cout << "�� ������? (0-���; 1-��) ";
			cin >> y;
			if (y == 1)
			{
			lovemoney:
				SetConsoleTextAttribute(Hconsole, 11);
				cout << "������ ����������? (0-���; 1-��) ";
				cin >> y;
				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 5);
					cout << "���� �����? (0-���; 1-��) ";
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 15);
						cout << "������ ������ �������� ? (0-���; 1-��; 2-������) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 3);
							cout << "... � ����? (0-���; 1-��) ";
							cin >> y;
							if (y == 0)
							{
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "� ��� ���� �������� �����? (0-���; 1-��) ";
								cin >> y;
								if (y == 0)
								{
									SetConsoleTextAttribute(Hconsole, 3);
									cout << "������ �� ������� �� �����!" << endl;
									system("pause");
									goto nach;
								}
								else if (y == 1)
								{
									SetConsoleTextAttribute(Hconsole, 11);
									cout << "������ �� ������� �� �����!" << endl;
									system("pause");
									goto nach;
								}
								else
								{
									SetConsoleTextAttribute(Hconsole, 4);
									cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
									system("pause");
									goto start;
								}
							}
							else if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 6);
								cout << "��� ����������� ���������� �������� !" << endl;
								system("pause");
								goto nach;
							}
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 4);
							cout << "������ �������� ������� �����? (0-���; 1-��) ";
							cin >> y;
							if (y == 0)
							{
								SetConsoleTextAttribute(Hconsole, 9);
								cout << "������ � ����, ��� ����� �������� � �������, ���� ���� �� ����� ������� ? (0-���; 1-��) ";
								cin >> y;
								if (y == 0)
								{
									SetConsoleTextAttribute(Hconsole, 5);
									cout << "�� ������ ������ �� �������� !" << endl;
									system("pause");
									goto nach;
								}
								else if (y == 1)
								{
									SetConsoleTextAttribute(Hconsole, 2);
									cout << "��� ����������� ���������� ������� !" << endl;
									system("pause");
									goto nach;
								}
								else
								{
									SetConsoleTextAttribute(Hconsole, 4);
									cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
									system("pause");
									goto start;
								}
							}
							else if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 3);
								cout << "��� ����������� ���������� ����� !" << endl;
								system("pause");
								goto nach;
							}
							else
							{
								SetConsoleTextAttribute(Hconsole, 4);
								cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
								system("pause");
								goto start;
							}
						}
						else if (y == 2)
						{
							SetConsoleTextAttribute(Hconsole, 14);
							cout << "��� ����������� ���������� ������� !" << endl;
							system("pause");
							goto nach;
						}
						else
						{
							SetConsoleTextAttribute(Hconsole, 4);
							cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
							system("pause");
							goto start;
						}
					}

					else if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 13);
						cout << "�� ��������� ������? (0-���; 1-��) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 8);
							cout << "��� ����������� ���������� ����� !" << endl;
							system("pause");
							goto nach;
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 6);
							cout << "��� ����������� ���������� ���������� !" << endl;
							system("pause");
							goto nach;
						}
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
						system("pause");
						goto start;
					}
				}

				else if (y == 0)
				{
					SetConsoleTextAttribute(Hconsole, 13);
					cout << "������ ���������� �� 8 ����� � ����? (0-���; 1-��) ";
					cin >> y;
					if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 6);
						cout << "���� ������? (0-���; 1-��) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 5);
							cout << " �� ������ ������ �� �����! " << endl;
							system("pause");
							goto nach;
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 15);
							cout << " �� ������ ������ �� ����! " << endl;
							system("pause");
							goto nach;
						}
					}
					else if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "������ ����� �����? (0-���; 1-��) ";
						cin >> y;
						if (y == 0)
						{
							SetConsoleTextAttribute(Hconsole, 5);
							cout << " �� ������ ������ �� �������! " << endl;
							system("pause");
							goto nach;
						}
						else if (y == 1)
						{
							SetConsoleTextAttribute(Hconsole, 1);
							cout << " �� ������ ������ �� ������! " << endl;
							system("pause");
							goto nach;
						}
					}
				}
				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
					system("pause");
					goto start;
				}

			}
			else if (y == 0)
			{
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "������ ������? (0-���; 1-��) ";
				cin >> y;
				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << " �������� � ������! " << endl;
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
				cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
				system("pause");
				goto start;
			}
		}

		else if (y == 0)
		{
			SetConsoleTextAttribute(Hconsole, 5);
			cout << "������ ����������� � ���������? (0-���; 1-��) ";
			cin >> y;
			if (y == 0)
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "������ ����������� � �������? (0-���; 1-��) ";
				cin >> y;
				if (y == 0)
				{
					SetConsoleTextAttribute(Hconsole, 10);
					cout << "��� ���������� ����� ! " << endl;
					system("pause");
					goto nach;
				}
				else if (y == 1)
				{
				paren:
					SetConsoleTextAttribute(Hconsole, 9);
					cout << "�� ������ ? (0-���; 1-��) ";
					cin >> y;
					if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "�� ������ ������ �� ������� ! " << endl;
						system("pause");
						goto nach;
					}
					else if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 3);
						cout << "�� ������� ����� ! " << endl;
						system("pause");
						goto nach;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
						system("pause");
						goto start;
					}
				}
				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
					system("pause");
					goto start;
				}
			}
			else if (y == 1)
			{
				SetConsoleTextAttribute(Hconsole, 13);
				cout << "�� ������ ��������? (0-���; 1-��) ";
				cin >> y;
				if (y == 0)
				{
					goto paren;
				}
				else if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 2);
					cout << "������ ������? (0-���; 1-��) ";
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 6);
						cout << "��� ���������� ������ ! " << endl;
						system("pause");
						goto nach;
					}
					else if (y == 0)
					{
						SetConsoleTextAttribute(Hconsole, 7);
						cout << "��� ���������� ���������� ! " << endl;
						system("pause");
						goto nach;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
						system("pause");
						goto start;
					}
				}
				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
					system("pause");
					goto start;
				}
			}
			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
				system("pause");
				goto start;
			}
		}

		else
		{
			SetConsoleTextAttribute(Hconsole, 4);
			cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
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
		cout << "����� �� ������ ������� ���������������� ? " << endl;
		SetConsoleTextAttribute(Hconsole, 10);
		cout << "1) ��� ����� " << endl;
		cout << "2) ���������� " << endl;
		cout << "3) � �� ���� �������� �� ���� " << endl;
		cout << "4) ������������, ���������, ������������ " << endl;
		cin >> y;

		if (y == 1)
		{
			SetConsoleTextAttribute(Hconsole, 5);
			cout << "������� �� Scratch, ����� PYTHON!" << endl;
			system("pause");
			goto nach;
		}

		else if (y == 2)
		{
			SetConsoleTextAttribute(Hconsole, 10);
			cout << "1) ����� ������ " << endl;
			SetConsoleTextAttribute(Hconsole, 13);
			cout << "2) � ���� ���� ���� ��� ��������! " << endl;
			cin >> y;

			if (y == 1)
			{
				SetConsoleTextAttribute(Hconsole, 5);
				cout << "����� ���������/�����? " << endl;
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "1) � ���� �������� � ������� IT-�������� " << endl;
				cout << "2) � ������ ���� $$$" << endl;
				cout << "3) ���" << endl;
				cout << "4) ����.����" << endl;
				cout << "5) ���������" << endl;
				cout << "6) 3D/����" << endl;
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
						cout << "��� ����� ������� ���� PYTHON" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 11);
						cout << "��� ����� ������� ���� PYTHON" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 3)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "��� ����� ������� ���� C#" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 4)
					{
						SetConsoleTextAttribute(Hconsole, 5);
						cout << "��� ����� ������� ���� Objective-C" << endl;
						system("pause");
						goto nach;
					}
				}

				else if (y == 2)
				{
					SetConsoleTextAttribute(Hconsole, 12);
					cout << "��� ����� ������� JAVA" << endl;
					system("pause");
					goto nach;
				}

				else if (y == 3)
				{
					SetConsoleTextAttribute(Hconsole, 15);
					cout << "1) �������� (���-���������) " << endl;
					SetConsoleTextAttribute(Hconsole, 20);
					cout << "2) ������ (��, ��� �� ���������) " << endl;
					cin >> y;

					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 13);
						cout << "��� ����� ������� JAVASCRIPT" << endl;
						system("pause");
						goto nach;
					}

					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 14);
						cout << "���� �������� �� ..." << endl;
						SetConsoleTextAttribute(Hconsole, 6);
						cout << "1) ���������� " << endl;
						cout << "2) ������� " << endl;
						cin >> y;

						if (y == 1)
						{
						micro:
							SetConsoleTextAttribute(Hconsole, 9);
							cout << "��� ������� � Microsoft ?" << endl;
							cout << "1) ����� ��� " << endl;
							cout << "2) ������� " << endl;
							cout << "3) ���� " << endl;
							cin >> y;
							if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 10);
								cout << "��� ����� ������� C#" << endl;
								system("pause");
								goto nach;
							}
							else if (y == 2)
							{
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "��� ����� ������� JAVA" << endl;
								system("pause");
								goto nach;
							}
							else if (y == 3)
							{
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "��� ����� ������� JAVA" << endl;
								system("pause");
								goto nach;
							}
						}

						else if (y == 2)
						{
						trud:
							SetConsoleTextAttribute(Hconsole, 14);
							cout << "������ ����������� ��� �� �����, �� �� ����� ����������? " << endl;
							SetConsoleTextAttribute(Hconsole, 6);
							cout << "1-��, 2-���,������" << endl;
							cin >> y;
							if (y == 1)
							{
								SetConsoleTextAttribute(Hconsole, 13);
								cout << "��� ����� ������� JAVASCRIPT" << endl;
								system("pause");
								goto nach;
							}
							else if (y == 2)
							{
								SetConsoleTextAttribute(Hconsole, 14);
								cout << "����� � ��� ������� �������? " << endl;
								SetConsoleTextAttribute(Hconsole, 13);
								cout << "1) LEGO" << endl;
								SetConsoleTextAttribute(Hconsole, 12);
								cout << "2) ���������" << endl;
								SetConsoleTextAttribute(Hconsole, 11);
								cout << "3) ���������� �� ������� �����" << endl;
								cin >> y;
								if (y == 1)
								{
									SetConsoleTextAttribute(Hconsole, 14);
									cout << "��� ����� ������� PYTHON" << endl;
									system("pause");
									goto nach;
								}

								else if (y == 2)
								{
									SetConsoleTextAttribute(Hconsole, 12);
									cout << "��� ����� ������� RUBY" << endl;
									system("pause");
									goto nach;
								}

								else if (y == 3)
								{
									SetConsoleTextAttribute(Hconsole, 20);
									cout << "��� ����� ������� PHP" << endl;
									system("pause");
									goto nach;
								}

								else
								{
									SetConsoleTextAttribute(Hconsole, 4);
									cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
									system("pause");
									goto programm;
								}
							}

							else
							{
								SetConsoleTextAttribute(Hconsole, 4);
								cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
								system("pause");
								goto programm;
							}
						}

						else
						{
							SetConsoleTextAttribute(Hconsole, 4);
							cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
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
					cout << "����� OS? " << endl;
					SetConsoleTextAttribute(Hconsole, 14);
					cout << "1) IOS " << endl;
					cout << "2) Android" << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 5);
						cout << "��� ����� ������� OBJECTIVE-C" << endl;
						system("pause");
						goto nach;
					}

					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 12);
						cout << "��� ����� ������� JAVA" << endl;
						system("pause");
						goto nach;
					}

					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
						system("pause");
						goto programm;
					}
				}

				else if (y == 6)
				{
				game:
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "��� ����� ������� C++" << endl;
					system("pause");
					goto nach;
				}

				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
					system("pause");
					goto programm;
				}
			}

			else if (y == 2)
			{
			sfera:
				SetConsoleTextAttribute(Hconsole, 9);
				cout << "����� ���������/�����? " << endl;
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "1) 3D/����" << endl;
				cout << "2) ���������" << endl;
				cout << "3) ����.����" << endl;
				cout << "4) ���" << endl;
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
					cout << "��� ������ ����� �������� � �������� �������, ��� twitter?  " << endl;
					SetConsoleTextAttribute(Hconsole, 10);
					cout << "1 - ��, 2-��� " << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 13);
						cout << "��� ����� ������� JAVASCRIPT" << endl;
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
						cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
						system("pause");
						goto programm;
					}
				}

				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
					system("pause");
					goto programm;
				}

			}

			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
				system("pause");
				goto programm;
			}

		}

		else if (y == 3)
		{
			SetConsoleTextAttribute(Hconsole, 11);
			cout << "�������� PYTHON !" << endl;
			system("pause");
			goto nach;
		}

		else if (y == 4)
		{
			SetConsoleTextAttribute(Hconsole, 14);
			cout << "��� ���� ���� �� ������� ? " << endl;
			SetConsoleTextAttribute(Hconsole, 10);
			cout << "1) �� " << endl;
			SetConsoleTextAttribute(Hconsole, 12);
			cout << "2) ���. ������ ���� ������ " << endl;
			cin >> y;

			if (y == 1)
			{
				goto sfera;
			}

			else if (y == 2)
			{
				SetConsoleTextAttribute(Hconsole, 14);
				cout << "��� �������� �������... " << endl;
				SetConsoleTextAttribute(Hconsole, 10);
				cout << "1) ������� �������� " << endl;
				cout << "2) ������ �������� " << endl;
				cout << "3) ����������� �������� " << endl;
				cout << "4) ����� ������� ����(�� ����� ����� �����) " << endl;
				cin >> y;

				if (y == 1)
				{
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "��� ����� ������� ���� PYTHON" << endl;
					system("pause");
					goto nach;
				}

				else if (y == 2)
				{
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "��� ����� ������� ���� PYTHON" << endl;
					system("pause");
					goto nach;
				}

				else if (y == 3)
				{
					SetConsoleTextAttribute(Hconsole, 14);
					cout << "����� ������� �������? " << endl;
					SetConsoleTextAttribute(Hconsole, 10);
					cout << "1) �������" << endl;
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "2) ������" << endl;
					cin >> y;
					if (y == 1)
					{
						SetConsoleTextAttribute(Hconsole, 12);
						cout << "��� ����� ������� ���� JAVA" << endl;
						system("pause");
						goto nach;
					}
					else if (y == 2)
					{
						SetConsoleTextAttribute(Hconsole, 11);
						cout << "��� ����� ������� ���� C " << endl;
						system("pause");
						goto nach;
					}
					else
					{
						SetConsoleTextAttribute(Hconsole, 4);
						cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
						system("pause");
						goto programm;
					}
				}

				else if (y == 4)
				{
					SetConsoleTextAttribute(Hconsole, 11);
					cout << "��� ����� ������� ���� c++" << endl;
					system("pause");
					goto nach;
				}

				else
				{
					SetConsoleTextAttribute(Hconsole, 4);
					cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
					system("pause");
					goto programm;
				}
			}

			else
			{
				SetConsoleTextAttribute(Hconsole, 4);
				cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
				system("pause");
				goto programm;
			}
		}

		else
		{
			SetConsoleTextAttribute(Hconsole, 4);
			cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
			system("pause");
			goto programm;
		}
	}

	else
	{
		SetConsoleTextAttribute(Hconsole, 4);
		cout << "�� ����� �� ���������� �����, ���������� ��� ���" << endl;
		system("pause");
		goto nach;
	}

}




















