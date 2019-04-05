/*
 *题目描述：
 *连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
 *长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。  
 *输入描述：连续输入字符串(输入2次,每个字符串长度小于100)
 *输出描述：输出到长度为8的新字符串数组 
 *示例1： 
 *输入：
 *abc 
 *123456789
 *输出： 
 *abc00000 
 *12345678
 *90000000
 *作者：zheng kaifan
 *时间：2019/3/30 
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
