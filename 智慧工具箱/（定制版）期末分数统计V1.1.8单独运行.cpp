//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;
int a[10002][10005];
int n, m;
ofstream fout1("in.txt"), fout2("out.txt");

void in() {
	int temp = 0;
	for (int i = 1; i <= n; i++) {
		cin >> temp;
		fout1 << temp << ' ';
		for (int j = 2; j <= m + 1; j++) {
			cin >> a[temp][j];
			fout1 << a[temp][j] << ' ';
		}
		a[temp][1] = temp;
		fout1 << endl;
	}
}

void add() {
	int tmp = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 2; j <= m + 1; j++) {
			tmp += a[i][j];
		}
		a[i][m + 2] = tmp;
		tmp = 0;
	}
}

void out() {
	for (int i = 1; i <= n; i++) {
		cout << setw(4) << i;
		fout2 << i << ' ';
		for (int j = 2; j <= m + 2; j++) {
			cout << setw(9) << a[i][j];
			fout2 << a[i][j] << ' ';
		}
		cout << endl;
		fout2 << endl;
	}
	cout << setw(4) << "�ܼ�";
	for (int j = 2; j <= m + 2; j++) {
		cout << setw(9) << a[n + 1][j];
		fout2 << a[n + 1][j];
	}
}

void endadd() {
	int tmp = 0;
	for (int j = 2; j <= m + 2; j++) {
		for (int i = 1; i <= n; i++) {
			tmp += a[i][j];
		}
		a[n + 1][j] = tmp;
		tmp = 0;
	}
}

int main() {
	cout << "��ӭʹ�ã������ߣ������� �������䣺lqx3089@outlook.com" << endl;
	cout << "�ٷ���վ��https://wlcx.cn1.utools.club/" << endl;
	cout << "������ѧ��������ѧ����" << endl;
	cin >> n >> m;
	cout << "����ɹ����밴����Ĺ���������롣" << endl;
	cout << "��������ѧ�ţ�Ȼ��ո�Ȼ��������Ʒ�����ÿ������֮���ÿո������" << endl;
	cout << "һ��һ������" << endl;
	in();
	add();
	endadd();
	cout << "ѧ��  ";
	for (int i = 1; i <= m; i++) {
		cout << "��Ŀ��" << i << "  ";
	}
	cout << "�ܷ֣�" << endl;
	cout << "=============================================" << endl;
	out();
	cout << endl;
	system("pause");
	return 0;
}
