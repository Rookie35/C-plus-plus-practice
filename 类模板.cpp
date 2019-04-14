/*
* @Author: ZKF
* @Date:   2019-04-07 23:53:04
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-08 00:17:01
*/

/**
 * 类模板
 */

#include <iostream>

using namespace std;

//自定义类型
class node
{
public:
	node() {data=0;}
	node(int r) {data=r;}
	int data;
	int *next;
	friend ostream &operator << (ostream &out,node &p);
};

ostream &operator << (ostream &out,node &p)
{
	out<<p.data;
	return out;
}

//类模板
template <typename type>
class point
{
public:
	point() {x=type(0);y=type(0);}
	point(type a,type b) {x=a;y=b;}
	void show()
	{
		cout<<"(";
		cout<<x<<","<<y;
		cout<<")"<<endl;
	}
private:
	type x;
	type y;
};

//多个参数类型
template <typename type1,typename type2>
class test
{
public:
	test();
	test(type1 a,type2 b) {x=a;y=b;}
	void show();
	type1 func(type1 a);
private:
	type1 x;
	type2 y;
};

//类外定义成员先进行模板声明
template <typename t1,typename t2>
void test<t1,t2>::show()
{
	cout<<"(";
	cout<<x<<","<<y;
	cout<<")"<<endl;
}

//
template <typename type1,typename type2>
type1 test<type1,type2>::func(type1 a)
{
	cout<<a<<endl;
}

//类外定义构造函数
template <typename type1,typename type2>
test<type1,type2>::test()
{
	x=type1(0);
	y=type2(0);
}

int main()
{
	point<int> p1;
	point<int> p2(1,2);
	p1.show();
	p2.show();

	point<double> p3(3.2,5.6);
	p3.show();

	point<char> p4('c','k');
	p4.show();

	point<node> n1(10,13);
	n1.show();

	test<float,char> p5(3.14f,'w');
	p5.show();
	test<char*,int> p6("zhengkaifan",3);
	p6.show();

	return 0;
}