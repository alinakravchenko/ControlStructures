#include<iostream>
#include<conio.h>
using namespace std;
//#define CCE
//#define FOR_IN1
//#define factorial1
//#define FACTORIAL
//#define POWER
#define ASCII
//#define Fibanach
void main()
{
	setlocale(LC_ALL, "");
#ifdef CCE
	for (counter; condition; expression)
	{
		...
			group - of - statements;
		...
	}
#endif 

#ifdef FOR_IN1
	int n = 10;
	cout << "������� ���������� ��������:  "; cin >> n;
	for (
		int i = 0;
		i < n;
		i++)
	{
		cout << i << "\t";
	}
	cout << endl;
#endif

#ifdef factorial1
	int factorial, A, i;
	cout << "������� �����: "; cin >> A;
	for (factorial = 1; i = 2; )

#endif



#ifdef POWER
		double a; //��������� �������
	int n; //���������� �������
	double N = 1; //�������
	cout << "������� ��������� �������:  "; cin >> a;
	cout << "������� ���������� �������:  "; cin >> n;
	cout << a << "^" << n << "=";
	if (n < 0)
	{
		n = -n; //������ ���� ���������� �� ���������������
		a = 1 / a; //��������� ��������� ������� � ����������� 
	}
	for (int i = 1; i < n; i++)
	{
		N *= a;
	}cout << N << endl;


#endif

#ifdef ASCII
	cout << "������� ASCII ��������:\n";

	for (int i = 0; i < 256; i++) 
	{
		if (i % 16 == 0)cout << endl;
		cout << (char)i << " ";
		//(char)i-��� ����� �������������� ���������� 'i' � ��� 'char'
	}
	cout << endl;
#endif


#ifdef Fibanach
	double  a = 0;
double  b = 1;
	double c=a+b;
	int n; //������
	cout << "������� ���-�� ����� �� ���� ���������: "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << a << "\t";
		a = b;
		b = c;
		c = a + b;
	}


#endif
}
