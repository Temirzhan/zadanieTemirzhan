#include<locale.h>
#include<stdio.h>
#include<iostream>

using namespace std;

char f;
void main()
{
	do
	{
		setlocale(LC_ALL, "rus");
		int N;
		cout << "�������� �������?" << endl;
		cin >> N;
		if (N == 1)
		{
			/*1.	1.	�������� ���������� ���� �����������-���������� � ������ �� ���� ����� ������ � ������. ���������� ����� ������, ���������� ������ �����������*/
			int sum = 0;
			int bali;
			for (int i = 1; i <= 2; i++)
			{
				sum = 0;
				for (int s = 1; s <= 5; s++)
				{
					cout << s << " ���� " << i << "�����" << endl;
					cin >> bali;
					sum += bali;
				}
				cout << "����� ������" << i << "����� = " << sum << endl;
			}
		}
		else if (N == 2)
		{
			/*2.	�������� ������ �� ������ ������� ������� ���� �������. ���������� ������� ������ � ������ ������. ���������� �������� � ������ ������ ����������.*/
			int uch;
			cout << "������� ���������� ��������" << endl;
			cin >> uch;
			int ocenk;
			int srball;
			for (int i = 1; i <= 2; i++)
			{
				srball = 0;
				for (int s = 1; s <= uch; s++)
				{
					cout << "������ " << s << " �������" << i << " ������" << endl;
					cin >> ocenk;
					srball += ocenk;
				}
				cout << "������� ���� " << i << " ������ =" << srball / 2 << endl;
			}
		}
		else if (N == 3)
		{
			/*3.	� ������� 12 �������. �������� ���������� ������� (� ������� �������)  � ������� (� ��2) ������� ������. ���������� ������� ��������� ��������� �� ������� � �����.*/
			unsigned int P;
			unsigned int nasel;
			int sumP = 0;
			int sumN = 0;
			int plotn;
			for (int i = 1; i <= 12; i++)
			{
				cout << "���������� ������� � " << i << "������" << endl;
				cin >> nasel;
				cout << "������� � " << i << "������ " << endl;
				cin >> P;
				sumP += P;
				sumN += nasel;
			}
			plotn = sumN / sumP;
			cout << "��������� ��������� ���������� " << plotn << "������� �� ��/�" << endl;
		}
		else if (N == 4)
		{
			/*4.	� �������� ��������� �������� �����-�� ���������� �����������. ���������� ���������� ������������ ������ ����� ������: ������� ������� �������� �������� �� ����,
			������ ������� ������� ���������� � � ����� �������� ������� ������ �������� � ������ �������� �� ���, � ��� �� ��������� ������� ������� �����������.*/
			int poset;
			cout << "������� ������� �������� ��������" << endl;
			cin >> poset;
			int vozrast;
			int max = 0;
			int min = 99999;
			int c;
			int b;
			for (int i = 1; i <= poset; i++)
			{
				cout << "������� �������" << i << " ����������" << endl;
				cin >> vozrast;
				if (max < vozrast)
				{
					max = vozrast;
					c = i;
				}
				if (min > vozrast)
				{
					min = vozrast;
					b = i;
				}
			}
			cout << "����� " << b << " ���������� ����� ������� " << min << endl;
			cout << "������� " << c << " ���������� ����� ������� " << max << endl;
		}
		else if (N == 5)
		{
			/*5.	�� ������ ������� ����������� ���������� ������ � �������� (� ����� ������� 15).
			����� ���������� ������ ��� ��������, ��������� ������������ ������, ������� ������ ��������� � ������ ������, �� ������ � ��� �����, ���� �� ���������� ����� � ��������.
			������������� ��� ������, ����� ������������ ����� ���������� ������ ������, ��� ���� �� ������.*/

			int yachik = 15;
			int nado;
			do {
			eshe:
				cout << "������� ���� ������ ����" << endl;
				cin >> nado;
				if (yachik >= nado)
				{
					yachik -= nado;
				}
				else if (yachik>0)
				{
					cout << "������ ��� �������" << endl;
					cout << "������ ������� �������" << endl;
					cout << "y-da     n-net" << endl;
					cin >> f;
					if (f == 'y')
					{
						goto eshe;
					}
					else
					{
						break;
					}
				}
				cout << "�������� " << yachik << endl;
				cout << "��� ������ ����" << endl;
				cout << "y-da     n-net" << endl;
				cin >> f;
			} while (f == 'y');
		}
		cout << "������ ���������� ��������� �������?" << endl;
		cout << "y-da     n-net" << endl;
		cin >> f;
	} while (f == 'y');
}