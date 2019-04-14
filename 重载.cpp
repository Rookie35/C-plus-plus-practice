/*
* @Author: ZKF
* @Date:   2019-04-07 15:29:23
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-08 13:01:44
*/

/**
 * 运算符重载
 */
#include <iostream>

using namespace std;

class point
{
public:
	point(int a,int b)
	{
		x=a;
		y=b;
	}

	int operator()(int a);
private:
	int x;
	int y;
};

int point::operator()(int a)
{
	return a+1;
}

int main()
{
	point inc(1,2);

	int k=inc(5);
	cout<<k<<endl;
	k=inc.operator()(5);

	cout<<k<<endl;

	return 0;
}