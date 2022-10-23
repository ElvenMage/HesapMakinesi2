#include <iostream>
using namespace std;
void islemler(double a, double b, char islem);
int main(void) {
	double a, b;
	char islem;
	while (true) {
		cout << "Sayilarinizi Giriniz. " << endl;
		cin >> a >> b;
		cout << "Islemlerinizi Giriniz. " << endl;
		cin >> islem;
		islemler(a, b, islem);

	}
}
void islemler(double a, double b, char islem) {

	switch (islem) {
	case'+':
		cout << a + b << endl;
		break;
	case'-':
		cout << a - b << endl;
		break;
	case'*':
		cout << a * b << endl;
		break;
	case'/':
		cout << a / b << endl;
		break;
	default:
		cout << "Gecersiz. " << endl;
	}
}