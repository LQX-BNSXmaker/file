#include <bits/stdc++.h>
using namespace std;

void tuichu() {
	cout << "�밴�����ȷ���˳�" << endl;
	system("pause");
	cout << "���������ʱ�洢" << endl;
	cout << "��������out��" << endl;
	cout << endl << endl;
	cout << "�����˳��������ر�����" << endl;
	cout << endl << endl;
}

int main() {
	cout << "���ڼ��أ����Ժ󡭡�" << endl << "���ڴ������������ݡ���" << endl;
	system("title �ǻ۹����� �ɴ��������ṩ����֧��");
	cout << "��ӭʹ���ǻ۹�����" << endl;
	for (;;) {
		int z;
		cout << endl << endl << "���빤�ߴ��벢�س�" << endl << "�ճ�ʹ�ù��ߣ�" << endl;

		cout << "1������������������� 2����������������� 3�����㳤�����������ı����" << endl << endl;

		cout << "���⹤�ߣ�" << endl << endl << "4�������˷�" << endl;
		cout << "֧�ִ��������޴������ˣ����Ա�֤7000λ����7000λ������׼ȷ������֧����������" << endl;
		cout << "5����������" << endl << "������������ѧ�źͳɼ����ᰴѧ���������������" << endl;
		cout << "�磺����3�س� 87�س� 1�س� 99�س� 2�س� 46�س� �����1 99�س� 2 46�س� 3 87�س�" << endl;
		cout << "�����������������������ļ����µ�txt�ļ���" << endl;
		cout << "6��Բ��������" << endl << "�����֪���ߺ�ֱ�������������������1�������֪���뾶��������2" << endl;
		cout << endl << endl << " -1:�˳�" << endl;

		cout << "���ϸ���Ҫ�����룬������򽫻ᱼ��������" << endl;
		cout << "��������������ѭ������ǿ�ƹرճ������´�" << endl;

		cin >> z;
		if (z == 1)
			system("volume.exe");
		else if (z == 2)
			system("gys.exe");
		else if (z == 3)
			system("acreage.exe");
		else if (z == 4)
			system("bigmultiplication.exe");
		else if (z == 5)
			system("score.exe");
		else if (z == -1) {
			z = 0;
			break;
		} else if (z == 6) {
			system("sz");
		} else if (z == -2) {
			system("CLS");
		}
		system("CLS");
	}
	tuichu();
	return 0;
}