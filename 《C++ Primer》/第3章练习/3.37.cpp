//���ַ�����'hello'������� 
#include<iostream>
using std::cout;
using std::endl;

int main()
{
	const char ca[]={'h','e','l','l','o'};//���峣���ַ����� 
	const char *cp=ca;
	while(*cp)
	{
		cout<<*cp<<endl;
		++cp;
	}
	return 0;
}
