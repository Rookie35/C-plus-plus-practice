/*
 *��Ŀ������
 *���������ַ������밴����Ϊ8���ÿ���ַ�����������µ��ַ������飻 
 *���Ȳ���8���������ַ������ں��油����0�����ַ���������  
 *�������������������ַ���(����2��,ÿ���ַ�������С��100)
 *������������������Ϊ8�����ַ������� 
 *ʾ��1�� 
 *���룺
 *abc 
 *123456789
 *����� 
 *abc00000 
 *12345678
 *90000000
 *���ߣ�zheng kaifan
 *ʱ�䣺2019/3/30 
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string str1,str2;
	cin >> str1 >> str2;
	vector<string> str;
	
	while(str1.size()>8)
	{
		str.push_back(str1.substr(0,8));
		cout<<str.back()<<endl;
		str1=str1.substr(8);
	}
	//cout<<str;
	str.push_back(str1);
	cout<< str.back().append(8-str1.size(),'0')<<endl;
	
	while(str2.size()>8)
	{
		str.push_back(str2.substr(0,8));
		cout<<str.back()<<endl;
		str2=str2.substr(8);
	}
	
	str.push_back(str2);
	cout<< str.back().append(8-str2.size(),'0')<<endl;

	return 0;
}
