/*
* @Author: ZKF
* @Date:   2019-04-11 12:45:48
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 13:38:58
*/

#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<char> charSet;

	charSet.insert('E');
	charSet.insert('D');
	charSet.insert('C');
	charSet.insert('B');
	charSet.insert('A');
	charSet.insert('A');
	charSet.insert('A');

	cout<<"Contents of set:"<<endl;
	set<char>::iterator iter;
	for(iter=charSet.begin();iter!=charSet.end();iter++)
	{
		cout<<*iter<<endl;
	}
	cout<<endl;

	iter=charSet.find('D');
	if(iter==charSet.end())
		cout<<"Element not found.";
	else
		cout<<"Element found:"<<*iter;

	cout<<endl<<charSet.count('A');
	cout<<endl<<charSet.count('Z');
	return 0;
}