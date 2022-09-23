#include<iostream>
#include<stdio.h>
using namespace std;
//菜单界面
void showMenu() {
	cout << "*************************" << endl;
	cout << "***   1、添加联系人   ***" << endl;
	cout << "***   2、显示联系人   ***" << endl;
	cout << "***   3、删除联系人   ***" << endl;
	cout << "***   4、查找联系人   ***" << endl;
	cout << "***   5、修改联系人   ***" << endl;
	cout << "***   6、清空联系人   ***" << endl;
	cout << "***   0、退出系统     ***" << endl;
	cout << "*************************" << endl;
}
//添加联系人
void add() {}
//显示联系人
void show() {}
//删除联系人
void del() {}
//查找联系人
void seach() {}
//修改联系人
void change() {}
//清空联系人
void empty() {}
//退出系统
void exit() {}
int main() {
	showMenu();

	int select = 1;
	while (scanf_s("%d", &select) != 0)
	{
		switch (select)
		{
		case 0:
			cout << "系统已退出，欢迎下次使用！" << endl;
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
		default:cout << "请输入正确的功能编号！" << endl;
			break;
		}
	}
}