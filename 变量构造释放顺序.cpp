/*
* @Author: ZKF
* @Date:   2019-04-07 16:24:02
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 16:28:14
*/

/**
 * 变量构造释放顺序
 */
#include <iostream>
using namespace std;

class test
{
public:
	test(int i)
	{
		id=i;
		cout<<"num"<<id<<"created"<<endl;
	}
	~test()
	{
		cout<<"~num"<<id<<"destory"<<endl;
	}
private:
	int id;
};

int main()
{
	test t1(1);
	test t2(2);
	test t3(3),t4(4),t5(5);

	return 0;
}