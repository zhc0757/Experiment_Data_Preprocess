#include<iostream>
#include<iomanip>
#include<string>
#include<sstream>
#include<cmath>
#include<cstring>
#include"uncertainty.h"
using namespace std;
int main()
{
	float*x;
	unsigned n, i;
	float a, de;
	bool b = false;
	cout << "��������������n��";
	while (cin >> n) {
		x = new float[n];
		cout << "����������x[i]��\n";
		for (i = 0; i < n; ++i)cin >> x[i];
		cout << "����������ˮƽa��0.01��0.05����";
		cin >> a;
		cout << "�����릤���ǣ���";
		cin >> de;
		u(x, n, a, de);
		//system("pause");
		delete[]x;
		b = false;
		cout << "��������������n��";
	}
	return 0;
}