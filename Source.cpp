#include <iostream>

using namespace std;
int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << "Nhap a";
	cin >> a;
	cout << "Nhap b";
	cin >> b;
	cout << "Tong la: " << tong(a, b) << endln;

	system("pause");
	return 0;
}