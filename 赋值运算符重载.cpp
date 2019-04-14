/*
* @Author: ZKF
* @Date:   2019-04-09 18:18:35
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-09 18:34:58
*/
/**
 * 赋值运算符重载
 */
#include <iostream>
//#include <istream>
#include <string.h>

using namespace std;
class hstring
{
public:
	hstring(char *s=NULL);
	~hstring();

	hstring &operator = (const hstring &a);

	friend ostream &operator << (ostream &oc,hstring &a);
	int getlen()
	{return lenth;}
private:
	int lenth;
	char *str;
};

hstring::hstring(char *s)
{
	if(s)
	{
		lenth=strlen(s);
		str = new char [lenth+1];
		strcpy(str,s);
	}
	else
	{
		lenth=0;
		str=NULL;
	}
}

hstring::~hstring()
{
	if(str) delete [] str;
}

ostream &operator << (ostream &out,hstring &a)
{
	out<<a.str;
	return out;
}

hstring &hstring::operator = (const hstring &a)
{
	if(&a==this) return *this;

	if(str) delete [] str;
	lenth=a.lenth;
	str=new char [lenth+1];
	strcpy(str,a.str);

	return *this;
}

int main()
{
	hstring s1="123456";
	hstring s2("zhengkaifan");

	cout<<s2<<endl;
	cout<<s1<<endl;
	operator << (cout,s1);

	s2=s1;
	cout<<endl<<s2<<endl;

	s2.operator=(s1);
	cout<<s2<<endl;
	cout<<"lenth="<<s2.getlen()<<endl;

	return 0;
}