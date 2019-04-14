/*
* @Author: ZKF
* @Date:   2019-04-08 00:48:21
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-08 13:02:01
*/
/**
 * 虚函数
 */
#include <iostream>
#include <string>

using namespace std;

class animal
{
public:
	animal() {food="杂食";}
	virtual void show()
	{
		cout<<"动物食物："<<food<<endl;
	}

	//重载
	void show(int n)
	{
		cout<<"动物数量:"<<n<<endl;
	}
private:
	string food;
};

class cat:public animal
{
public:
	cat(string &f){food=f;}
	~cat(){}
	virtual void show()
	{
		cout<<"cat的食物:"<<food<<endl;
	}
private:
	string food;
};

class dog:public animal
{
public:
		dog(string &f){food = f;}
		virtual void show()
		{
			cout<<"dog的食物:"<<food<<endl;
		}

		void show(int n)
		{
			cout<<"dog的数量:"<<n<<endl;
		}

	private:
		string food;
};

class pig:public animal
{
public:
	pig(string &f){food=f;}
	virtual void show();
private:
	string food;
};

void pig::show()
{
	cout<<"pig的食物:"<<food<<endl;
}

class duck:public animal
{
public:
	duck() {cout<<"duck create"<<endl;}
};

int main()
{
	string a="鱼";
	string b="骨";
	string e="肉";

	animal *p;
	animal an;
	cat c(c);
	dog d(b);

	pig g(e);
	p=&an;	p->show();
	p=&c;	p->show();
	p=&d;	p->show();
	p=&g;	p->show();
	p->show(123);

	duck du;
	p=&du;	p->show();

	return 0;
}

