#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX 1000

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
void add() {
	int age;
	string name, tel, add;
	bool sex;
	cout << "����������" << endl;
	cin >> name;
	cout << "�������Ա�" << endl;
	cin >> sex;
	cout << "����������" << endl;
	cin >> age;
	cout << "������绰" << endl;
	cin >> tel;
	cout << "������סַ" << endl;
	cin >> add;
}

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

	//��ϵ�˽ṹ����ƣ������������Ա����䡢�绰��סַ
	struct Mem
	{
		string name;
		bool sex;
		int age;
		string tel;
		string add;
	};

	//ͨѶ¼�ṹ����ƣ������������ϵ�˽ṹ�塢��¼����
	struct Book
	{
		struct Mem arr[MAX];
		int size;
	};

	//��ʼ��ͨѶ¼
	//Book db;
	//db.size = 0;

	//��ʾ��ӭ�˵�
	showMenu();

	//�û�����ѡ����ѡ����
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