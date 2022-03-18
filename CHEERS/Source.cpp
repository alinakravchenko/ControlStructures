#pragma warning(desable: 4326) //убирает ошибки
#include<iostream>
using namespace std; 
#define UPPER_LEFT_ANGLE char(218)
#define UPPER_RIGHT_ANGLE (char)191
#define DOWN_RIGHT_ANGLE (char)217
#define DOWN_LEFT_ANGLE (char)192
#define HORIZONTAL_LINE (char)196<<(char)196
#define VERTICAL_LINE (char)179
#define BLACK_BOX "  "
#define WHITE_BOX "\xDB\xDB"
//\x-позволяет вкл.ASCII-символ в строковую константу
//после \х обязательно идёт 16-ичный код символа (Нех-код) 
//#define WHITE_BOX (char)219<<(char)219
void main()
{
	setlocale(LC_ALL, "С");
	int n;
	cout << "Введите размер фигуры: "; cin>>n;
	/*for (int i = 0; i < 256; i++) {
		cout << i << "\t" << (char)i << endl;
	}*/
	n++;
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= n; j++)
		{
			/*cout << "* ";*/
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n&&j == 0)cout << DOWN_LEFT_ANGLE;
			else if (i == n&&j == n)cout << DOWN_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else cout << (i & 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
				/*i % 2 == j & 2 ? cout << WHITE_BOX : cout << "  ";*/
				/*(i+j)%2==0?cout<<WHITE_BOX : cout << "  ";*/
		}
		cout << endl;
	}
}