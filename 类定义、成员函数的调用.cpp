//自行设计一个日期类Tdate，含有三个数据成员：月、日、年。

//用下面的主函数生成一个日期对象，然后在fn函数中将日期设置为某年某月某日，并输出这个日期。
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;
class Tdate
{   public:
	void get(int x, int y, int z){
		moth = x;
		day = y;
		year = z;
	
	}
	void put()
	{
		cout << year << "/" << moth << "/" << day <<endl;

	}
	int day;
	int moth;
	int year;
};
int main()

{

	void fn(Tdate &rd);//声明fn函数

	int a, b, c;

	Tdate d;                      //生成一个日期对象

	cin >> a >> b >> c;

	d.get(a, b, c);//将对象d设置成c年a月b日

	fn(d);//调用fn函数，不允许拿a,b,c做参数

	d.put(); //输出经fn修改后的新日期

	return 0;

}



void fn(Tdate &rd)

{
	rd.put();//先显示原来的日期，即c年a月b日

	int m, d, y;

	cin >> m >> d >> y;  //要设置的月日年


	rd.get(m, d, y);//在此填写代码，将主函数中对象设置成新日期      

}

