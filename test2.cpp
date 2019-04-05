/*题目描述：写出一个程序，接受一个由字母和数字组成的字符串，
 *和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写 
 *输入描述：输入一个有字母和数字以及空格组成的字符串，和一个字符。 
 *输出描述：输出输入字符串中含有该字符的个数。 
 *示例：
 *输入：ABCDEF A
 *输出： 1
 * 
 *作者：zheng kaifan
 *时间:2019/3/30 
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
