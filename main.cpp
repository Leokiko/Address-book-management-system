#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;
#define MAX 1000

//通讯录DB，包含五个成员变量	:包括姓名、性别、年龄、电话、住址
struct Mem
{
	string name;
	string sex;
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

//欢迎菜单界面
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

//清屏，并重新显示欢迎菜单
void cls() {
	system("pause");
	system("cls");
	//返回菜单时重新显示欢迎菜单
	showMenu();
}
//检查通讯录是否为空
int che(int size) {
	if (size == 0)
	{
		cout << "通讯录为空，请先使用添加联系人功能" << endl;
		cls();
		return 1;
	}
	return 0;
}
//添加联系人
void add(Book* a) {
	//size就是实际的联系人个数
	if (a->size == MAX)
	{
		cout << "通讯录已满，如需添加，请删除联系人之后添加" << endl;
		cls();
		return;
	}
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
	//cout << temp.name << temp.sex << temp.age << temp.tel << temp.add << endl;
	a->arr[a->size] = temp;
	a->size++;
	//也可以使用解引用来使用结构体数据
	//(*a).arr[(*a).size] = temp;
	//(*a).size++;
	cout << "添加成功！" << endl;
	cls();
}

//显示所有联系人
void show(Book a) {
	if (che(a.size))return;
	for (int i = 0; i < a.size; i++)
	{
		cout << "姓名：" << a.arr[i].name << "\t";
		cout << "性别：" << a.arr[i].sex << "\t";
		cout << "年龄：" << a.arr[i].age << "\t";
		cout << "电话：" << a.arr[i].tel << "\t";
		cout << "地址：" << a.arr[i].add << endl;
	}
	cout << "联系人显示完毕，请继续输入功能编号使用系统" << endl;
}

//按名字检测联系人是否存在
int exist(Book s, string name) {
	int loc = -1;
	for (int i = 0; i < s.size; i++)
	{
		//这里不能排除同名情况，只会记录最后一个匹配的联系人，因为姓名并不是主键，用手机号即可规避该情况
		//这里查找到的loc，是数组中的l位置加一
		if (name == s.arr[i].name)
			loc = i + 1;
	}
	return loc;
}
//删除联系人
void del(Book* a) {
	if (che(a->size))return;
	cout << "请输入要删除联系人的姓名" << endl;
	string name;
	cin >> name;
	int loc;
	loc = exist(*a, name);
	if (loc)
	{
		//数组删除需要顺序前移
		for (int i = loc; i < a->size; i++)
		{
			a->arr[i] = a->arr[i + 1];
		}
		a->size--;
		cout << "删除成功" << endl;
		cls();
		return;
	}
	else {
		cout << "查无此人，正在返回主菜单，请使用显示联系人功能确定要删除的联系人姓名" << endl;
	}
	cls();
}

//查找联系人
void seach() {}

//修改联系人
void change() {}

//清空联系人
void empty() {}

//退出系统
void exit() {
	cout << "系统已退出，欢迎下次使用！" << endl;
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
			system("pause");
			return 0;
		case 1:add(&db);
			break;
		case 2:show(db);
			break;
		case 3:del(&db);
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