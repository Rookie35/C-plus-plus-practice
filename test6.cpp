/*题目描述：功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子
 *（如180的质数因子为2 2 3 3 5 ）最后一个数后面也要有空格
 *输入描述：输入一个long型整数 
 *输出描述：按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。 
 *示例1： 
 *输入
 *180 
 *输出 
 *2 2 3 3 5 
 *作者：zheng kaifan
 *时间：2019/03/31 
 */ 
#include<iostream>

using namespace std;

int main()
{
	long input;
	cin>>input;
	
	for(int i=2;i<=input;)
	{
		if(input%i==0)
		{
			cout<<i<<" ";
			input=input/i;
		}
		else i++;
	}
	return 0;
}  
