
// Lab_03_1.cpp
// < �������, ��� ������ >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 28

#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;



	A = (x * x) / 2.1 + (sin(fabs(x)));
	// ����� 1: ������������ � ��������� ����
	if (x <= -5)
		B = 1. / tan(exp(x));

	if (-5 < x && x < 0)
		B = 2 - ((x * x * x) / (fabs(x) + 1));

	if (x >= 0)
		B = sqrt(fabs(x) - (x * x) / 2);
	y = A + B;

	cout << endl;
	cout << "1) y = " << y << endl;

	// ����� 2: ������������ � ����� ����
	if (x <= -5)
		B = 1. / tan(exp(x));
	else
		if (-5 < x && x < 0)
			B = 2 - ((x * x * x) / (fabs(x) + 1));
		else
			B = sqrt(fabs(x) - (x * x) / 2);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}