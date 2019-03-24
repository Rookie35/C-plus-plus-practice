//将字符数组'hello'按行输出 
#include<iostream>
using std::cout;
using std::endl;

int main()
{
	const char ca[]={'h','e','l','l','o'};//定义常量字符数组 
	const char *cp=ca;
	while(*cp)
	{
		cout<<*cp<<endl;
		++cp;
	}
	return 0;
}
