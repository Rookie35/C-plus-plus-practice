/*
* @Author: ZKF
* @Date:   2019-04-10 15:28:21
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-10 15:45:21
*/
/**
 * 写出一个程序，接受一个字符串，然后输出该字符串反转后的字符串。
 *输入：
 * abcd
 * 输出：
 * dcba
 */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1,str2;
	cin>>str1;
	string::iterator it;
	for(it=str1.end()-1;it>=str1.begin();it--)
	{
		str2.push_back(*it);
	}
	cout<<str2;
	return 0;
}
