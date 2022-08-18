#include <iostream>
#include <math.h>
#include <cstdlib>		//библиотека для вычисления модуля
#define PI 3.14159265   // обозначение глобальной переменной
using namespace std;

int main() {
	double Sn = 0;			// сумма для заданного n
	double Se = 0;			// сумма для заданной точности
	double E = 0.0001;		// заданная точность
	double f;			// точное значение функции
	double a = PI / 5;      // (а,b) - диапазон изменения аргумента
	double b = 9 * PI / 5; //
	int k = 10;
	int n = 40;		// кол-во слагаемых
	double x;
	double h = (b - a) / k; // шаг по Х
	int i1, i2;			// переменные
	double xe;			// накапливаемый элемент для суммирования 

	for (int ix = 0; ix <= k; ix++) {
		x = a + ix * h;
		f = -log(fabs(2 * sin(x / 2))); 	// fabs-модуль

		for (i1 = 1; i1 <= n; i1++)   
		{
			Sn += (cos(i1 * x)) / i1; 
		}

		for (i2 = 1, xe = 1; fabs(xe) >= E; i2++)   
		{
			xe = (cos(i2 * x)) / i2;
			Se += xe;
		}
	printf("x=%.2f SN=%f SN=%f Y=%f\n", x, Sn, Se, f);
	}
}
