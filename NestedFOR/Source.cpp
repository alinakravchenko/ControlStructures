#include<iostream>
using namespace std;
//#define MULTIPLICATION_TABLE
#define A
void main()
{
	setlocale(LC_ALL, "");
#ifdef MULTIPLICATION_TABLE
	int n = 10;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i < 10)cout << " ";
			cout << i << " * ";
			if (j < 10)cout << " ";
			cout << j << " = ";
			if (i*j < 100)cout << " ";
			if (i*j < 10)cout << " ";
			cout << i*j << "\t" << endl;
		}
		cout << endl;
	}
#endif


#ifdef A
	int n = 10;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout.width(5); //задаём ширину поля, в которое будет выведено следующее значение
			//после задания ширины, устанавливается выравнивание по правому краю
			cout << i*j;
		}
		cout << endl;
	}




#endif
}