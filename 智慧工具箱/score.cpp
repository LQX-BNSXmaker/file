//maker:Li Qixuan score
#include <bits/stdc++.h>
using namespace std;
double a[1001];
int n, xh;
double  cj, s;
ofstream fout;
ofstream fout2, fout3, fout4;

int main() {
	cout << "���������������ٸ��ɼ���Ҫ����" << endl;
	cin >> n;
	fout.open("���뱸��.txt");
	fout2.open("������ݴ�ѧ��.txt");
	fout3.open("������ݲ���ѧ��.txt");
	fout4.open("ѧ���ܳɼ���Ʒ����.txt");
	for (int i = 1; i <= n; i++) {
		cout << "ѧ�ţ�";
		cin >> xh;
		cout << "������";
		cin >> cj;
		a[xh] = cj;
		fout << xh << ' ' << cj << endl;
		s += cj;
	}
	fout << flush;
	fout.close();
	for (int i = 1; i <= n; i++) {
		cout << "ѧ�ţ�" << i << "  ������" << a[i] << endl;
		fout2 << i << ' ' << a[i] << endl;
		fout3 << a[i] << endl;
	}
	fout4 << "�ܼ�" << s << "��" << endl << "ƽ��" << s / n << "��" << endl;
	fout2 << flush;
	fout2.close();
	fout3 << flush;
	fout3.close();
	fout4 << flush;
	fout4.close();
	system("pause");
	return 0;
}
