/*
* @Author: ZKF
* @Date:   2019-04-07 17:26:38
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-07 17:32:18
*/

/**
 * 多线程
 */

#include <iostream>
#include <thread>
using namespace std;

void output(int i)
{
	cout<<i<<endl;
}

int main()
{
	for(int i=0;i<4;i++)
	{
		std::thread t(output,i);
		t.detach();
	}
	//getchar();
	return 0;
}