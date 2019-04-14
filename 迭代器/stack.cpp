/*
* @Author: ZKF
* @Date:   2019-04-11 13:56:19
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 18:04:14
*/
#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main()
{
	stack< int,list<int> > intStack;

	int x;

	cout<<"Value pushed onto stack:"<<endl;

	for(x=1;x<11;++x)
	{
		intStack.push(x*100);
		cout<<x*100<<endl;
	}

	cout<<"Values popped from stack:"<<endl;
	int size=intStack.size();
	for(x=0;x<size;++x)
	{
		cout<<intStack.top()<<endl;
		intStack.pop();
	}
	return 0;
}