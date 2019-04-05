/*题目描述： 
 *输入描述：
 *输出描述： 
 *示例1 
 *输入 
 *5.5 
 *输出 
 *6 
 *作者：zheng kaifan 
 *时间：2019/03/31 
 */

#include<iostream>

using namespace std;

int main()
{
	float input;
	int output;
	cin>>input;
	
	int i;
	i=input;
//	cout<<i<<endl;
	if(input<float(i+0.5))
		output=i;
	else 
		output=i+1; 
	
	cout<<output<<endl;
	return 0;
}
