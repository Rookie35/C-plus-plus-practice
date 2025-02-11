/*
* @Author: ZKF
* @Date:   2019-04-07 16:29:49
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 16:57:02
*/

/**
 * 多继承与派生构造
 */

#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	person(string n="NULL",int s=0);
	~person();
	string name;
	int sex;
	void show();
};

class grade
{
public:
	grade(int m=0,int e=0,int c=0);
	~grade();
	int ch;
	int math;
	int eng;
	void show();
};

class d
{
public:
	d(int y=0,int m=0,int d=0);
	~d();
	int year;
	int month;
	int day;
	void show();
};

class student:public person,public grade
{
public:
	student(string nu,string n,int s,int m,int e,int ch,
			int y,int mou,int da);
	string num;
	d date;
	void show();
};

student::student(string nu,
				string n,int s,
				int m,int e,int ch,
				int y,int mou,int da)
:person(n,s),grade(m,e,ch),date(y,mou,da)
{
	num=nu;
}

void student::show()
{
	cout<<endl;
	cout<<"学号"<<num<<endl;
	person::show();
	grade::show();
	date.show();
	cout<<endl;
}

//---------person---------
person::person(string n,int s)
{
	name=n;
	sex=s;
	cout<<"person类创建"<<endl;
}

person::~person()
{
	cout<<"person类释放"<<endl;
}

void person::show()
{
	cout<<"姓名:"<<name<<endl;
	if(sex)
		cout<<"性别：男"<<endl;
	else
		cout<<"性别：女"<<endl;
}
//----------grade-----------
grade::grade(int m,int e,int c)
{
	ch=c;
	math=m;
	eng=e;
	cout<<"grade类创建"<<endl;
}

grade::~grade()
{
	cout<<"grade类释放"<<endl;
}

void grade::show()
{
	cout<<"语文:"<<ch<<endl;
	cout<<"数学:"<<math<<endl;
	cout<<"英语:"<<eng<<endl;
}

//----------d----------
d::d(int a,int b,int c)
{
	year=a;
	month=b;
	day=c;
	cout<<"对象date创建"<<endl;
}

d::~d()
{
	cout<<"对象date释放"<<endl;
}

void d::show()
{
	cout<<"日期:";
	cout<<year<<","<<month<<","<<day<<endl;
}

int main()
{
	student s("11020204","郑",0,98,96,88,2012,4,3);

	s.math=59;
	s.show();
	s.date.show();
	s.grade::show();
	cout<<endl;
	return 0;
}