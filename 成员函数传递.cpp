
//类的定义
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<cstring>
using namespace std;
class Student{
public:
	void Set(char*, int);  //用来设置学号和分数
	void  Edit(int);    //用来修改成绩，参数为新成绩
	void Out();         //用来输出学号和分数
protected:
	char  num[10];
	int  score;
};


//成员函数
//#include"lei.h"
void Student::Set(char *n, int x)
{
	strcpy(num, n);
	score = x;
}
void Student::Out()
{
	cout << num << " " << score << endl;
}

void Student::Edit(int v)
{
	score = v;
	cout << num << " " << score << endl;
}


//主函数
//#include"lei.h"
int main()
{
	void fn(Student &sd,int);  //声明被调函数
		Student s;
	char  n[10];
	int  score, newscore;
	cin >> n >> score; //键盘输入学号和分数，学号8位
	s.Set(n,score);  //将s学号和分数设为键盘输入的值
	s.Out();  //显示s的数据
	cin >> newscore;  //输入一个新的分数给newscore
	fn(s,newscore);      //调用fn函数，将s成绩修改为newscore，然后显示修改后s的数据
	return 0;
}
void fn(Student &sd,int x)
{
	sd.Edit(x);
}