// Lab_03_1.cpp
// < �������� �����  >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ���� �����.
// ������ 7
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = ((x * x) * (sin(x / 2)));
	// ����� 1: ������������ � ��������� ����
	if (x <= -5)
		B = atan(exp(x));
	if (-5 < x && x <= 0)
		B = 1 + (pow(x, 3) / 4);
	if (x > 0)
		B = (std::log(x) - (x / 5));
	;
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ����� ����
	if (x <= -5)
		B = atan(exp(x));
	else
		if (-5 < x && x <= 0)
			B = 1 + (pow(x, 3) / 4);
		else
			B = (std::log(x) - (x / 5));
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}