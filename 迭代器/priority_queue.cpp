/*
* @Author: ZKF
* @Date:   2019-04-11 18:27:19
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 18:30:53
*/
#include <iostream>
#include <list>
#include <queue>

using namespace std;

int main()
{
	priority_queue<int,vector<int>,greater<int> > intQueue;
	int x;
	intQueue.push(400);
	intQueue.push(100);
	intQueue.push(500);
	intQueue.push(300);
	intQueue.push(200);

	cout<<"Values removed from priority queue:"<<endl;
	int size=intQueue.size();

	for(x=0;x<size;++x)
	{
		cout<<intQueue.top()<<endl;
		intQueue.pop();
	}

	return 0;
}