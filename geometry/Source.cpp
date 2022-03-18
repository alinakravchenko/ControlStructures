#include<iostream>
using namespace std;
//#define SQUARE
//#define STAR
//#define NUM1
//#define NUM2
//#define NUM3
//#define NUM4
//#define NUM5
//#define ROMBUS
//#define PLUSMINUS
//#define TERNARY

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите число: "; cin >> n;
#ifdef SQUARE
	for (int i = 0; i < n; i++)//повторяет вывод строки из * 
	{
		for (int j = 0; j < n; j++) //повторяет вывод *, мы получаем строку из *
		{
			cout << "* ";
		}
		cout << endl;
	}

#endif
#ifdef STAR
	for (int i = 0; i < n; i++) {
		cout << "*"; cout << "\n";
		for (int j = 0; j < n; j++) {
			cout << "**"; cout << "\n";
			for (int l = 0; l < n; l++) {
				cout << "***"; cout << "\n";
				for (int q = 0; q < n; q++) {
					cout << "****"; cout << "\n";
					for (int a = 0; a < n; a++) {
						cout << "*****"; cout << "\n";
					}
				}
			}
		}
	}
	cout << endl;
#endif
#ifdef NUM1
	//for(start;  stop;  step )
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

#endif
#ifdef NUM2
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			cout << "* ";
		}
		cout << endl;
}

#endif
#ifdef NUM3
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <i; j++) cout << "  ";
			for (int j = i; j < n; j++) cout << "* "; 
			cout << endl;
			}


#endif
#ifdef NUM4
	for (int i = 1; i < n; i++) {
		for (int j = i; j < n; j++) cout << "  ";
		for (int j = 0; j < i; j++) cout << "* ";
		cout << endl;
}

#endif
#ifdef NUM5
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n-i; j++) cout << " "; 
		for (int j = 1; j <= i; j++) cout << "*";
		for (int j = -2; j <= i; j++) cout << "*";
		cout << endl;
}
#endif
#ifdef ROMBUS
	for (int i = 0; i < 0; i++)
	{
		for (int j = i; j < n; j++) cout << "  ";
		cout << "/";
		for (int j = 0; j < i*2; j++)cout << " ";
		cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		cout << "\\";
		for (int j = i; j < n-1; j++)cout << "  ";
		cout << "/";
		cout << endl;
	}







#endif
#ifdef PLUSMINUS
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
		{
			//cout << "+ ";
			//if ((j +i)% 2 == 0)cout << "+ ";
			//else cout << "- ";
			(i + j) % 2 == 0 ? cout << "+ " : cout << "- ";
		}
		cout << endl;
	}

#endif
#ifdef TERNARY
	for (int i = 0; i < n; i++) 
		for (int j = 0; j <= n; j++)
			cout << (j==n ? "\n" : (i+j)%2==0?"+ " : "- ");
		cout << endl;
	

#endif
}