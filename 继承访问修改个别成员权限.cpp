/*
* @Author: ZKF
* @Date:   2019-04-08 23:03:13
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-08 23:44:54
*/

/**
 * 继承访问修改个别成员权限
 */
#include <iostream>
#include <string>

using namespace std;

class person
{
public:
	person(string n="0",string s="0",string id="0");
	string name;
	string sex;
protected:
	void showp();
private:
	string IDnum;
	void showID();
};

class stu:private person
{
public:
	stu(int g=0,int s=0,string n="NUL",string sex="NUL",string id="NUL");
	int grade;
	int schoolnum;
	void show();
	person::name;
	person::showp;
};

//----------------person---------------------
person::person(string n,string s,string id)
{
	name=n;
	sex=s;
	IDnum=id;
}

void person::showp()
{
	cout<<"姓名:"<<name<<endl;
	cout<<"性别:"<<sex<<endl;
	cout<<"ID:"<<IDnum<<endl;
}

void person::showID()
{
	cout<<"身份证号:"<<IDnum<<endl;
}

//-------------stu-----------------
stu::stu(int g,int s,string n,string sex,string id):person(n,sex,id)
{
	grade=g;
	schoolnum=s;
}

void stu::show()
{
	person::showp();
	cout<<"成绩："<<grade<<endl;
	cout<<"学号:"<<schoolnum<<endl;
}

int main()
{
	stu s(98,110202,"zhengkaifan","男","7058");
//stu s;
	s.show();
	cout<<endl;
	s.name="ck";
	s.show();
	cout<<endl;
	s.showp();

	return 0; 
}