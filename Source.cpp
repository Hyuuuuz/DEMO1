#include <iostream>

using namespace std;
int tong(int a, int b) {
	return a + b;
}
int hieu(int a, int b);
int tich(int a, int b) {
	return a * b;
}
int soNT(int a) {
	int dem = 0;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			++dem;
			if (i != n / i) {
				++dem;
			}
		}
	}
	if (dem == 2) {
		return 1; // true
	}
	else {
		return 0; // false;
	}
}
float thuong(int a, int b);
int main()
{



	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";



	cout << "Nhap a";
	cin >> a;
	cout<<soNT(a)


	//cout << "Nhap b";
	//cin >> b;
	//cout << "Tong la: " << tong(a, b);

	//cout << "Nhap x,y";
	//cin >> y >> x;
	//cout << "Tich la: " << tich(x, y);

	system("pause");
	return 0;
}