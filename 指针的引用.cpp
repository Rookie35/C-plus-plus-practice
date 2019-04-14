/*
* @Author: ZKF
* @Date:   2019-04-07 23:48:44
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 23:52:48
*/

/**
 *指针的引用
 */
#include <iostream>

using namespace std;

void test(char* &p)
{
	p=new char('H');
}

int main()
{
	char *p;

	p=new char('k');
	cout<<*p<<endl;

	test(p);
	cout<<*p<<endl;

	delete p;

	return 0;	
}