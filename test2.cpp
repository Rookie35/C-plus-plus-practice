/*��Ŀ������д��һ�����򣬽���һ������ĸ��������ɵ��ַ�����
 *��һ���ַ���Ȼ����������ַ����к��и��ַ��ĸ����������ִ�Сд 
 *��������������һ������ĸ�������Լ��ո���ɵ��ַ�������һ���ַ��� 
 *�����������������ַ����к��и��ַ��ĸ����� 
 *ʾ����
 *���룺ABCDEF A
 *����� 1
 * 
 *���ߣ�zheng kaifan
 *ʱ��:2019/3/30 
 */ 
 
#include<iostream>

using namespace std;

int main()
{
	string str;
	char c1,c2;
	int count=0;
	
	cin >> str >> c1;
	
	if(c1>='a'&&c1<='z')
	{
		c2=c1-32;
	}else if(c1>='A'&&c1<='Z')
	{
		c2=c1+32;
	}else{
		
	}
		 
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==c1||str[i]==c2)
			count++;		
	}
	
	cout<< count <<endl;
	return 0;
}
