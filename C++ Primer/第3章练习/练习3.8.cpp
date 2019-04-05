/*
 *用while循环重写练习3.6程序 
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="Hello World";
	decltype(str.size()) n=0;
	while(n<str.size())
	{
		str[n]='X';
		n++;
	}
	cout<<str<<endl;
	return 0;
}
