/*
 *��дһ�γ��򣬶���һ�����������ŵ��ַ�������������ȥ��������ַ���ʣ��Ĳ��� 
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
		if(!ispunct(str[i]))//ispunct()�����ж��ַ��Ƿ�Ϊ������ 
		cout<<str[i];
	}
	return 0;
}
