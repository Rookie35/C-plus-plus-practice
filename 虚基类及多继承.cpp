/*
* @Author: ZKF
* @Date:   2019-04-09 00:23:40
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-09 00:37:19
*/

/**
 * 虚基类及多继承
 */
#include <iostream>

using namespace std;

class first
{
public:
	first()
	{cout<<"first创建"<<endl;}
	~first()
	{cout<<"first销毁"<<endl;}
};

class base:public first
{
public:
	base(int n)
	{
		cout<<"base创建";
		data=n;
		cout<<"data="<<data<<endl;
	}
	~base()
	{cout<<"base销毁"<<endl;}
protected:
	int data;
};

class base2
{
public:
	base2(int n)
	{cout<<"base2创建"<<endl;}
	~base2()
	{cout<<"base2销毁"<<endl;}
};

class father:protected virtual base
{
public:
	father(int n):base(n+10)
	{cout<<"father创建"<<endl;}
	~father()
	{cout<<"father销毁"<<endl;}
	void set_data()
	{
		data=10;
	}
};

class mother:public base2,virtual protected base
{
public:
	mother(int n):base2(100),base(n+100)
	{cout<<"mother创建"<<endl;}
	~mother()
	{cout<<"mother销毁"<<endl;}
	void set_data()
	{
		data=100;
	}
};

class other:public base
{
public:
	other(int n):base(n)
	{cout<<"other创建"<<endl;}
	~other()
	{cout<<"other销毁"<<endl;}
};

class child:protected father,protected mother,protected other
{
public:
	child():base(1),father(10),mother(100),other(123)
	{cout<<"child创建"<<endl;}
	~child()
	{cout<<"child销毁"<<endl;}
	void show_data()
	{
		father::set_data();
		mother::set_data();
		cout<<"father.data="<<father::data<<endl;
		cout<<"father.data="<<mother::data<<endl;
		cout<<"other.data="<<other::data<<endl;
	}
};

int main()
{
	child c;
	cout<<endl;

	c.show_data();

	cout<<endl;
	return 0;
}