//maker:Li Qixuan
#include <bits/stdc++.h>
using namespace std;
string st1, st2, st3;

int main() {
	cout << "��ʾ�����������ɺ�û�г��ֽ������Ԥ����˵������ı��޷�ֱ�Ӽ��ܣ����μ���ʧ�ܡ�";
	cout << "����԰����ֶμ��ܺ󷢸�������ѣ������ִ��Ҫʹ�ü���ʧ�ܵ����Ļᵼ�½���ʧ�ܡ�" << endl;
	cout << "������������֣�" << endl;
	getline(cin, st1);
	cout << "ԭ�ĳ��ȣ�" << st1.size() << endl;
	for (int i = 0; i < st1.size(); i++) {
		st2 += char(st1[i] + i);
	}
	cout << "���ĳ��ȣ�" << st2.size() << endl;
	cout << "���ģ�" << st2 << endl;
	for (int i = 0; i < st2.size(); i++) {
		st3 += char(st2[i] - i);
	}
	if (st3 != st1)
		cout << "Error. can not encrypt or parse!Please contact lqx3089@outlook.com." << endl;
	cout << "�����󳤶ȣ�" << st3.size() << endl << "��Ӧ������ԭ�ĳ��ȣ�����������ʧ�ܣ����lqx3089@outlook.com��ϵ��" <<
	     endl ;
	cout << "����������Ľ��ܺ�õ���"  << st3 << endl  <<
	     "��Ӧ������ԭ�ģ�����������ʧ�ܣ����lqx3089@outlook.com��ϵ" << endl;
	system("pause");
	return 0;
}
