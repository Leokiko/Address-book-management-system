#include<iostream>
#include<stdio.h>
using namespace std;
//�˵�����
void showMenu() {
	cout << "*************************" << endl;
	cout << "***   1�������ϵ��   ***" << endl;
	cout << "***   2����ʾ��ϵ��   ***" << endl;
	cout << "***   3��ɾ����ϵ��   ***" << endl;
	cout << "***   4��������ϵ��   ***" << endl;
	cout << "***   5���޸���ϵ��   ***" << endl;
	cout << "***   6�������ϵ��   ***" << endl;
	cout << "***   0���˳�ϵͳ     ***" << endl;
	cout << "*************************" << endl;
}
//�����ϵ��
void add() {}
//��ʾ��ϵ��
void show() {}
//ɾ����ϵ��
void del() {}
//������ϵ��
void seach() {}
//�޸���ϵ��
void change() {}
//�����ϵ��
void empty() {}
//�˳�ϵͳ
void exit() {}
int main() {
	showMenu();

	int select = 1;
	while (scanf_s("%d", &select) != 0)
	{
		switch (select)
		{
		case 0:
			cout << "ϵͳ���˳�����ӭ�´�ʹ�ã�" << endl;
			system("pause");
			return 0;
		case 1:add();
			break;
		case 2:show();
			break;
		case 3:del();
			break;
		case 4:seach();
			break;
		case 5:change();
			break;
		case 6:empty();
			break;
		default:cout << "��������ȷ�Ĺ��ܱ�ţ�" << endl;
			break;
		}
	}
}