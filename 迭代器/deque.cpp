/*
* @Author: ZKF
* @Date:   2019-04-11 11:40:03
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 11:46:12
*/


#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<char> charDeque;
	int x;
	for(x=0;x<10;++x)
	{
		charDeque.push_back(65+x);
	}

	int size=charDeque.size();
	for(x=0;x<size;++x)
	{
		deque<char>::iterator start=charDeque.begin();
		charDeque.erase(start);

		deque<char>::iterator iter;
		for(iter=charDeque.begin();iter!=charDeque.end();iter++)
		{
			cout<<*iter;
		}

		cout<<endl;
	}
	return 0;
}