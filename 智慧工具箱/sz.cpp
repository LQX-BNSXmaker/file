//maker:Li Qixuan //sz
#include <bits/stdc++.h>
using namespace std;
double r, d, h;
int m;

int main() {
	cout << "�����֪���ߺ�ֱ����������1�������֪���ߺͰ뾶��������2" << endl;
	cin >> m;
	if (m == 1) {
		cout << "������ֱ��" << endl;
		cin >> d;
		r = d / 2;
	} else {
		cout << "������뾶" << endl;
		cin >> r;
		d = r * 2;
	}
	cout << "�������" << endl;
	cin >> h;
	if (h == 0 || r == 0 || d == 0) {
		cerr << "���棡����ʱ�κ����ݶ���Ӧ��Ϊ0�������쳣�˳���" << endl;
		system("pause");
		return -1;
	}
	cout << "���Բ���ı�����ǣ�" << d * 3.14 * h + r *r * 3.14 * 2 << endl;
	system("pause");
	return 0;
}
