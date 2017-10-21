#include <iostream>
using namespace std ;

class ClassOne
{
// 类成员函数的声明 只声明，没有实现
private:
	//用private修饰的私有成员，
	//只能类内部访问，外部无法访问 
	int num;
	string str;
public :
	//用public修饰的公有方法，外部可以调用的方法 。
	
	//1.没有返回值的函数 ，名称与类名相同的是构造函数
	ClassOne( int num,string str);
	//构造方法的重载 
	ClassOne();
	// 带有~ 并且名称与类名相同的函数是析构函数
	~ClassOne();

	//2. 普通函数 
	void public_func();
	void setnum(int num);
	void setstr(string str);
	int getnum();
	int getstr();
private :
	//无法被外部调用的函数，用于内部调用
    void private_func();
};