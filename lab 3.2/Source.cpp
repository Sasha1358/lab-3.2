// Lab_03_2.cpp
// < �������� ���������� >
// ����������� ������ � 3.2
// ������������, ������ ��������: ������� � �����������.
// ������ 28
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double a; // ������� ��������
	double b; // ������� ��������
	double c; // ������� ��������
	double F; // ��������� ���������� ������
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;
	cout << "x = "; cin >> x;

	// ����� 1: ������������ � ���������� ����
	if (c < 0 && a != 0)
		F = -(a * x * x);
	if (c > 0 && a == 0)
		F = (a - x) / (c * x);
	if (!(c < 0 && a != 0) && !(c > 3 && a == 0))
		F = x / c;
	cout << endl;
	cout << "1) F = " << F << endl;
	// ����� 2: ������������ � ������ ����
	if (c < 0 && a != 0)
		F = -(a * x * x);
	else
		if (c > 0 && a == 0)
			F = (a - x) / (c * x);
		else
			F = x / c;
	cout << "2) F = " << F << endl;
	cin.get();
	return 0;
}