/*
* @Author: ZKF
* @Date:   2019-04-11 13:42:51
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-11 13:50:29
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
	multiset<char> charMultiset1;

	charMultiset1.insert('E');
	charMultiset1.insert('D');
	charMultiset1.insert('C');
	charMultiset1.insert('B');
	charMultiset1.insert('A');
	charMultiset1.insert('B');
	charMultiset1.insert('D');

	cout<<"Contents of first multiset:"<<endl;
	multiset<char>::iterator iter;
	for(iter=charMultiset1.begin();iter!=charMultiset1.end();iter++)
	{

		cout<<*iter<<endl;
	}
	cout<<endl;

	multiset<char> charMultiset2;

	charMultiset2.insert('J');
	charMultiset2.insert('I');
	charMultiset2.insert('H');
	charMultiset2.insert('G');
	charMultiset2.insert('F');
	charMultiset2.insert('G');
	charMultiset2.insert('I');

	cout<<"Contents of second multiset:"<<endl;

	for(iter=charMultiset2.begin();iter!=charMultiset2.end();iter++)
	{
		cout<<*iter<<endl;
	}
	cout<<endl;

	if(charMultiset1==charMultiset2)
		cout<<"set1==set2";
	else if(charMultiset1<charMultiset2)
		cout<<"set1<set2";
	else if(charMultiset1>charMultiset2)
		cout<<"set1>set2";

	return 0;
}