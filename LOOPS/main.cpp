#include<iostream>
#include<conio.h> //для _getch()
using namespace std;
//#define WHILE
//#define Escape 27
void main()
{
	setlocale(LC_ALL, "");
#ifdef WHILE
	int i = 0; //счетчик цикла
	int n; //количество итераций
	cout << "Введите количество итераций: ";
	cin >> n;
	while (i < n)    
	{
		cout << i << " Hello\n";
		i++;
	}
#endif

#ifdef Escape 27
	char key; //хранит код клавиши
	do
	{
		key = _getch();
		cout << (int)key << "\t" << key << endl;
		//(int)key - это явное преобразование переменной key, тип данных int 
		// для того, чтобы увидеть код клавиши 
	} while (key!=Escape)




#endif

		bool b = double(1 / 2);
	cout << b;
}