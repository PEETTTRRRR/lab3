#include <iostream>
#include <math.h>
#include <cstdlib>		//���������� ��� ���������� ������
#define PI 3.14159265   // ����������� ���������� ����������
using namespace std;

int main() {
	double Sn = 0;			// ����� ��� ��������� n
	double Se = 0;			// ����� ��� �������� ��������
	double E = 0.0001;		// �������� ��������
	double f;				// ������ �������� �������
	double a = PI / 5;      // (�,b) - �������� ��������� ���������
	double b = 9 * PI / 5; //
	int k = 10;
	int n = 40;				// ���-�� ���������
	double x;
	double h = (b - a) / k; // ��� �� �
	int i1, i2;			// ����������
	double xe;			// ������������� ������� ��� ������������ 

	for (int ix = 0; ix <= k; ix++) {
		x = a + ix * h;
		f = -log(fabs(2 * sin(x / 2))); //fabs-������

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