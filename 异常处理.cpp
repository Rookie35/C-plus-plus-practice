/*
* @Author: ZKF
* @Date:   2019-04-07 17:06:03
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 17:16:18
*/

/**
 * 异常处理
 */
#include <iostream>
#include <cmath>

using namespace std;

const double EPS=1e-100;

double chu(double a,double b)
{
	if(fabs(b-0)<EPS) 
		throw b;
	return a/b;
}

int main()
{
	try
	{
		cout<<chu(10,3)<<endl;
		cout<<chu(10,0)<<endl;
		cout<<chu(10,4)<<endl;
		cout<<chu(11,0)<<endl;
	}
	catch(int)
	{
		cout<<"int 除数不能为0"<<endl;
	}
	catch(double)
	{
		cout<<"double 除数不能为0"<<endl;
	}
	catch(...)
	{
		cout<<"错误！"<<endl;
	}
	cout<<"continue..."<<endl;
	return 0;
}