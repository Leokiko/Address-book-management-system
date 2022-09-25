#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX 1000

//通讯录DB，包含五个成员变量	:包括姓名、性别、年龄、电话、住址
struct Mem
{
	string name;
	bool sex;
	int age;
	string tel;
	string add;
};

//通讯录结构体设计，包括保存的联系人结构体、记录个数
struct Book
{
	struct Mem arr[MAX];
	int size;
};


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
void add(Book* a) {
	Mem temp;
	cout << "请输入姓名" << endl;
	cin >> temp.name;
	cout << "请输入性别" << endl;
	cin >> temp.sex;
	cout << "请输入年龄" << endl;
	cin >> temp.age;
	cout << "请输入电话" << endl;
	cin >> temp.tel;
	cout << "请输入住址" << endl;
	cin >> temp.add;
	a->arr[a->size] = temp;
	a->size++;
	//也可以使用解引用来使用结构体数据
	//(*a).arr[(*a).size] = temp;
	//(*a).size++;
}

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
void exit() {
	cout << "系统已退出，欢迎下次使用！" << endl;
	system("pause");
}

int main() {

	//初始化通讯录
	//size用来控制Mem数量，0代表为空，有值则代表Mem个数
	Book db;
	db.size = 0;

	//显示欢迎菜单
	showMenu();

	//用户输入选择编号选择功能
	int select = 1;
	while (scanf_s("%d", &select) != 0)
	{
		switch (select)
		{
		case 0:exit();
			return 0;
		case 1:add(&db);
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