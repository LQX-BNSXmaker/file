//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cout << "�������һ����" << endl;
	cin >> a;
	cout << "������ڶ�����" << endl;
	cin >> b;
	if (a == 1 || b == 1) {
		cout << "���棺1��������㣡";
		return -1;
	}
	cout << "���Ժ����ڼ���" << endl;
	int bcs, cs, ys;
	bcs = a;
	cs = b;
	ys = 0;
	while (cs != 0) {
		ys = bcs % cs;
		bcs = cs;
		cs = ys;

	}
	cout << "���ǵĹ������ǣ�" << bcs << endl;
	system("pause");
	return 0;
}
