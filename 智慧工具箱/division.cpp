//maker:Li Qixuan division
#include <bits/stdc++.h>
using namespace std;
double at, bt;
int a, b, c[9999999];
long long z, xa, clen;
ofstream fout("�߾��ȳ���.txt");

int main() {
	cout << "�����뱻������Ȼ��ո��س���Ȼ������������������ͳ�����ֻ֧����������" << endl;
	cin >> at >> bt;
	a = at;
	b = bt;
	cout << "���ݽ��ճɹ���" << "��������" << a << "������" << b << endl;
	system("pause");
	cout << "���ڼ��㡭��" << endl;
	z = a / b;
	xa = a % b * 10;
	while (xa > 0 && clen < 50001) {
		clen++;
		c[clen] = xa / b;
		xa = xa % b * 10;
		if (clen == 1000) {
			cout << "�����Ѵ�С�����1000λ���Ƿ��������1����2" << endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
		if (clen == 5000) {
			cout << "�����Ѵ�С�����5000λ���Ƿ��������1����2" << endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
		if (clen == 10000) {
			cout << "�����Ѵ�С�����10000λ���Ƿ��������1����2" << endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
		if (clen == 20000) {
			cout << "�����Ѵ�С�����20000λ���Ƿ��������1����2���������һ����ʾ�����������С��������Լ50000λʱ�������㣡��" <<
			     endl;
			int kk;
			cin >> kk;
			if (kk == 2)
				break;
		}
	}
	cout << "����ǣ�" << endl;
	cout << z ;
	fout << z;
	if (clen > 0)
		cout << '.';
	fout << '.';
	for (int i = 1; i <= clen; i++) {
		cout << c[i];
		fout << c[i];
	}
	return 0;
}
