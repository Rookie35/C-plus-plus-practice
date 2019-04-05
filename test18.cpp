/*题目描述：有两个用字符串表示的非常大的大整数,算出他们的乘积，
 *也是用字符串表示。不能用系统自带的大整数类型。
 *输入描述：空格分隔的两个字符串，代表输入的两个大整数 
 *输出描述：输入的乘积，用字符串表示
 *示例1：
 *输入：72106547548473106236 982161082972751393 
 *输出：70820244829634538040848656466105986748 
 *作者：zheng kaifan
 *时间：2019/04/03 
 *
 */
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	cin>>s1>>s2;
	
	
	string::iterator it1,it2;
	string s3;
	
	int a=0,b=0,c=0;
	for(it1=s1.end()-1,it2=s2.end();it1>=s1.begin()&&it2>=s2.begin();it1--,it2--)
	{
		a=(*it1)*(*it2)+c;
		if(a>=10)
		{
			b=a%10;
			c=a/10;
			s3.push_back(b);
		}else{
			s3.push_back(a);
		}
	}
	if(it1!=s1.begin())
	{
		while(it1>=s1.begin())
			s3.push_back(*it1);
	}
	if(it2!=s2.begin())
	{
		while(it2>=s2.begin())
			s3.push_back(*it2);
	}
	cout<<s3;
	return 0;
 } 
