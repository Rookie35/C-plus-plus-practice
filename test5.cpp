/*题目描述：写出一个程序，接受一个十六进制的数值字符串，输
 *出该数值的十进制字符串。（多组同时输入 ） 
 *输入描述：输入一个十六进制的数值字符串 
 *输出描述： 输出该数值的十进制字符串
 *示例：
 *输入：0xA 
 *输出：10
 *作者：zheng kaifan 
 *时间：2019/03/30
 */
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
	string input;
	vector<string> str;
	
	while(cin>>input)
	{
		int sum=0;
		//str.push_back(input);
		int len=input.size();
		for(int i=len-1;i>=0;i--)
		{
			if(input[i]>='A'&&input[i]<='F')
				sum+=(10+input[i]-'A')*pow(16,len-i-1);
			else if(input[i]>='0'&&input[i]<='9')
				sum+=(input[i]-'0')*pow(16,len-i-1);
		}
		cout<<sum<<endl;
	}
	return 0;
 } 
