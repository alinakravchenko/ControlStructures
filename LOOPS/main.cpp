#include<iostream>
#include<conio.h> //��� _getch()
using namespace std;
//#define WHILE
//#define Escape 27
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0; //������� �����
	int n; //���������� ��������
	cout << "������� ���������� ��������: ";
	cin >> n;
	while (i < n)    
	{
		cout << i << " Hello\n";
		i++;
	}
#endif

#ifdef Escape 27
	char key; //������ ��� �������
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		//(int)key - ��� ����� �������������� ���������� key, ��� ������ int 
		// ��� ����, ����� ������� ��� ������� 
	} while (key!=Escape)




#endif

		bool b = double(1 / 2);
	cout << b;
}