/*
* @Author: ZKF
* @Date:   2019-04-09 00:09:08
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-09 00:22:32
*/
/**
 * 虚函数引例
 */
#include <iostream>
using namespace std;

class base
{
public:
	base(int x=0,int y=0)
	{
		a=x;
		b=y;
	}

	virtual void show()
	{
		cout<<"base类"<<a<<","<<b<<endl;
	}
private:
	int a;
	int b;
};

class son:public base
{
public:
	son(int x=0,int y=0,int z=0,int f=0):base(x,y)
	{
		c=z;
		d=f;
	}
	virtual void show()
	{
		cout<<"son类"<<c<<","<<d<<endl;
	}
	void test()
	{
		cout<<"son的新增成员"<<endl;
	}
private:
	int c;
	int d;
};

int main()
{
	base *p;
	base b(50,50);
	son s(1,2,10,10);

	p=&b;
	p->show();

	p=&s;//用了虚函数后
	p->show();
	s.show();

	return 0;
}