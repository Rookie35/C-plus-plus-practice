/*
* @Author: ZKF
* @Date:   2019-04-07 17:20:09
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 17:25:45
*/

/**
 * 在一个类中嵌套另一个类
 */

#include <iostream>

using namespace std;

class My2
{
public:
	My2();
	~My2();
};

class My1
{
public:
	My1();
	~My1();
	My2 mymm;
};

My1::My1()
{
	cout<<"My1构造函数"<<endl;
}

My1::~My1()
{
	cout<<"My1析构函数"<<endl;
}

My2::My2()
{
	cout<<"My2构造函数"<<endl;
}

My2::~My2()
{
	cout<<"My2析构函数"<<endl;
}

int main()
{
	My1 mym1;
	//system("pause");
	return 0;
}