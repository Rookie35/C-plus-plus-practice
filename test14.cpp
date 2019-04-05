/*题目描述：编写一个函数，计算字符串中含有的不同字符的个数。
 *字符在ACSII码范围内(0~127)。不在范围内的不作统计。 
 *输入描述：输入N个字符，字符在ACSII码范围内。 
 *输出描述：输出范围在(0~127)字符的个数。 
 *示例1 
 *输入：
 *abc 
 *输出：
 *3 
 *作者：zheng kaifan
 *时间：2019/04/03 
 */
#include<iostream>
#include<string>
#include<set>

using namespace std;

int main()
{
	string input;
	cin>>input;
	
	set<char> si;
	int count=0;
	for(string::iterator it=input.begin();it!=input.end();it++)
	{
		if(*it>=0&&*it<=127&&si.count(*it)==0)
		{
			count++;
			si.insert(*it);
		}
	}

	cout<<count;
	return 0;
}
