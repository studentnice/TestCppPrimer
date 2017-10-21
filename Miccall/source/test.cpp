#include "../Miccall/header/test.h"
// public 
ClassOne::ClassOne()
{
	//构造函数在类的初始化时自动调用 没有传入参数会调用默认的构造函数
};

ClassOne::ClassOne(int num,string str)
{
	//当传入参数，类会选择相应的构造函数 
};

ClassOne::~ClassOne()
{
	//当类被销毁的时候，自动调用的函数 
};

void ClassOne::public_func()
{

};

void ClassOne::setnum(int num)
{

};
void ClassOne::setstr(string str)
{

};
int ClassOne::getnum()
{

};
int ClassOne::getstr()
{

};

//private 
void ClassOne::private_func()
{

};