
//lei
#include<iostream>
using namespace std;
class Box{
public:
	Box();
	~Box();
	void get(int x);
	void put(int y);
	void out();
protected:
	int num;
	int chang;
	int kuan;
	int gao;
};



//成员函数
//#include"Box.h"
Box::Box(){
	chang = 50;
	kuan = 30;
	gao = 40;
	num = 0;
	cout << chang << ',' << kuan << "," << gao << endl << num<<endl;
}
Box::~Box(){
	if (num = 0)
		cout << "Empty";
}
void Box::get(int x){
	num = x;

}
void Box::put(int y){
	num = num - y;
}
void Box::out(){
	cout << num<<endl;
	if (num >0)
		cout << "Empty";
}




//主函数

//#include"Box.h"
int main(){
	Box b;
	int gappl,pappl;
	cin >> gappl;
	b.get(gappl);
	cin >> pappl;
	b.put(pappl);
	cout << gappl<<endl;
	b.out();
}