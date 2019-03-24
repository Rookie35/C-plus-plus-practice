/*
 *编写一段程序，读入一个包含标点符号的字符串，将标点符号去除后输出字符串剩余的部分 
*/
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if(!ispunct(str[i]))//ispunct()用于判断字符是否为标点符号 
		cout<<str[i];
	}
	return 0;
}
