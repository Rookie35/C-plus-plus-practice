/*
* @Author: ZKF
* @Date:   2019-04-08 13:06:56
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-08 13:21:41
*/

/**
 * 纯虚函数与抽象类
 */

#include <iostream>
using namespace std;

class area
{
public:
	virtual float gongshi()=0;
	virtual void showarea()=0;
	virtual void test(int n)=0;
};

class yuan:public area
{
public:
	yuan(float a=0):PI(3.14159f)
	{r=a;}

	virtual float gongshi()
	{ return PI*r*r;}

	virtual void showarea()
	{
		cout<<"圆面积："<<gongshi()<<endl;
	}

	virtual void test(int n)
	{
		cout<<n<<"个圆"<<endl<<endl;
	}
private:
	float r;
	const float PI;
};

class san:public area
{
public:
	san(float c=0,float d=0){a=c;b=d;}
	virtual float gongshi()
	{return 0.5*a*b;}

	virtual void showarea()
	{
		cout<<"三角形面积："<<gongshi()<<endl;
	}
	virtual void test(int n)
	{
		cout<<n<<"个三角形"<<endl<<endl;
	}
private:
	float a;
	float b;
};

class ju:public area
{
public:
	ju(float c=0,float d=0) {a=c,b=d;}
	virtual float gongshi()
	{return a*b;}

	virtual void showarea()
	{
		cout<<"矩形面积:"<<gongshi()<<endl;
	}
	virtual void test(int  n)
	{
		cout<<b<<"个矩形"<<endl<<endl;
	}
private:
	float a;
	float b;
};

int main()
{
	area *p;
	yuan y(2);
	san s(2.1f,2.1f);
	ju j(2.1f,2.1f);

	p=&y;	p->showarea();p->test(10);
	p=&s;	p->showarea();p->test(20);
	p=&j;	p->showarea();p->test(30);
	cout<<p->gongshi()<<endl;

	return 0;
}
