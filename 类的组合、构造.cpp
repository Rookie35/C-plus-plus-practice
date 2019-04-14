/*
* @Author: ZKF
* @Date:   2019-04-08 00:23:31
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-08 00:46:24
*/
/**
 * 类的组合、构造
 */
#include <iostream>
using namespace std;

class student;

class Tgrade
{
public:
	Tgrade(int a=0,int b=0,int c=0);
	~Tgrade();
	float chinese;
	float english;
	float math;
	friend student;
private:
	float sum;
};

class student
{
public:
	student(int a=0,int b=0,int c=0);
	~student();
	void showgrade();
	char *name;
private:
	Tgrade grade;
	bool sex;
};

student::student(int a,int b,int c):grade(a,b,c)
{
	cout<<"student constructor\n";
}

Tgrade::Tgrade(int a,int b,int c)
{
	cout<<"grade constructor\n";
	chinese=a;
	english=b;
	math=c;
	sum=chinese+english+math;
}

void student::showgrade()
{
	cout<<grade.chinese<<endl
	<<grade.english<<endl
	<<grade.math<<endl;

	cout<<grade.sum<<endl;
}

Tgrade::~Tgrade()
{
	cout<<"Tgrade destory\n";
}

student::~student()
{
	cout<<"student destory\n";
}

int main()
{
	student s(1,2,3);

	s.showgrade();

	return 0; 
}

