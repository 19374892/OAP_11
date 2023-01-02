#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
int case1();
int case2();
int case3();
int case4();
int main()
{
	setlocale(LC_ALL, "Russian");
	int c;
	cout << " 1 – определение разницы значений кодов в ASCII буквы в прописном и строчном написании, если введен символ латинского алфавита, иначевывод сообщения об ошибке " << endl;
	cout << "2 – определение разницы значений кодов в Windows-1251 буквы в прописном и строчном написании, если введен символ русского алфавита, иначе вывод сообщения об ошибке" << endl;
	cout << "3 – вывод в консоль кода символа, соответствующего введенной цифре, иначе вывод сообщения об ошибке " << endl;
	cout << "4 – выход из программы" << endl;
	cin >> c;
	switch (c) {
	case 1:case1(); break;
	case 2:case2(); break;
	case 3:case3(); break;
	case 4:case4(); break;
	default:cout << "Error";
		return 0;

	}
}
int case1() {
	int razn;
	char ch, cs;
	printf("Введите прописной символ \n");
	scanf(" %c", &ch);
	printf("Введите строчный символ \n");
	scanf(" %c", &cs);
	if (ch, cs >= 'A' && ch, cs <= 'z') {
		cout << "Разнциа:";
		razn = cs - ch;
		cout << razn;
		return 0;
	}
	cout << "Error";
	return 0;
}
int case2() {
	setlocale(LC_ALL, "Rus");
	char ch, cs;
	int razn, c1, c2;
	cout << "Введите порописной символ" << endl;
	cin >> ch;
	cout << "Введите строчный символ" << endl;
	cin >> cs;
	if (ch, cs >= 'А' && ch, cs <= 'я') {
		c1 = ch;
		c2 = cs;
		razn = c2 - c1;
		cout << razn;
		return 0;
	}
	cout << "Error";
	return 0;

}
int case3() {
	char z;
	int z1;
	cout << "Введите цифру" << endl;
	cin >> z;
	z1 = z;
	if (z1 < 41 && z1>57) {
		cout << "Error";
	}
	cout << z1;
	return 0;
}
int case4() {
	return 0;
}
