//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;
string  st2, st3;

int main() {
	cout << "�������ģ�" << endl;
	getline(cin, st2);
	for (int i = 0; i < st2.size(); i++) {
		st3 += char(st2[i] - i);
	}
	cout << "����������Ľ��ܺ�õ���"  << st3 << endl;
	system("pause");
	return 0;
}
