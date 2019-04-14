/*
* @Author: ZKF
* @Date:   2019-04-11 18:11:53
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 18:15:52
*/
#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main()
{
	queue< int,list<int> > intQueue;

	int x;
	cout<<"Values pushed onto queue:"<<endl;

	for(x=1;x<11;++x)
	{
		intQueue.push(x*100);
		cout<<x*100<<endl;
	}

	cout<<"Values removed from queue:"<<endl;
	int size=intQueue.size();

	for(x=0;x<size;++x)
	{
		cout<<intQueue.front()<<endl;
		intQueue.pop();
	}

	return 0;
}