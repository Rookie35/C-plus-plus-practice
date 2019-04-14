/*
* @Author: ZKF
* @Date:   2019-04-07 15:46:15
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 16:15:59
*/

/**
 * 友元函数
 */

#include <iostream>

using namespace std;

class teacher;
class student;

class teacher
{
public:
	void input(int n);
	friend void show(teacher &m);

	int getstore(student &m);
private:
	int num;
	void test();
};

class student
{
public:
	student();
	void input(int n);
	friend void show(student &m);

	friend int teacher::getstore(student &m);
	friend teacher;

private:
	int store;
};

student::student()
{
	store=0;
}

int teacher::getstore(student &m)
{
	return m.store;
}

void teacher::input(int n)
{
	num=n;
}

void student::input(int n)
{
	store=n;
}

void show(student &m)
{
	cout<<m.store<<endl;
}

void show(teacher &m)
{
	cout<<m.num<<endl;
	m.input(10);
	m.test();
}

void teacher::test()
{
	cout<<"私有函数"<<endl;
}

int main()
{
	student s;
	s.input(100);

	teacher t;
	t.input(10);

	show(s);
	show(t);

	cout<<t.getstore(s)<<endl;//老师查看学生成绩

	return 0;
}