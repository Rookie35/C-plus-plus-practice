/*
* @Author: ZKF
* @Date:   2019-04-11 12:31:32
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 12:44:36
*/
#include <iostream>
#include <list>

using namespace std;

int main()
{
	int x;
	list<char> charList;
	for(x=0;x<10;++x)
		charList.push_back(65+x);

	cout<<"Original list:";
	list<char>::iterator iter;
	for(iter=charList.begin();iter!=charList.end();iter++)
	{
		cout<<*iter;
	}

	cout<<endl;

	list<char>::iterator start=charList.begin();
	charList.insert(++start,5,'X');

	cout<<"Result list:";
	for(iter=charList.begin();iter!=charList.end();iter++)
	{
		cout<<*iter;
	}
	return 0;
}