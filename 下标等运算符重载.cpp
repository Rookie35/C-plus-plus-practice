/*
* @Author: ZKF
* @Date:   2019-04-09 07:33:23
* @Last Modified by:   ZKF
* @Last Modified time: 2019-04-09 18:35:24
*/
/**
 * 下标等运算符重载
 */
#include <iostream>
#include <string.h>
using namespace std;

class hstring

{
public:
	hstring(char *s=NULL);
	~hstring();
	hstring &operator = (hstring &a);
	friend ostream &operator << (ostream &out,hstring &a);
	friend istream &operator >> (istream &in,hstring &a);
	char &operator [](int x);
	hstring &operator +=(const hstring &a);
	int getlen();
private:
	int lenth;
	char *str;
};

hstring::hstring(char *s)
{
	if(s)
	{
		lenth=strlen(s);
		str=new char [lenth+1];
		strcpy(str,s);
	}
	else
	{
		str=NULL;
		lenth=0;
	}
};

hstring::~hstring()
{
	if(str) delete [] str;
	lenth=0;
}

int hstring::getlen()
{
	return lenth;
}

hstring &hstring::operator = (hstring &a)
{
	if(&a==this) return *this;
	if(str) delete [] str;
	lenth=strlen(a.str);
	str=new char [lenth+1];
	strcpy(str,a.str);

	return *this;
}

char &hstring::operator [] (int x)
{
	static char a='\0';
	if(x<0||x>lenth) return a;
	return str[x];
}

istream &operator >> (istream &in,hstring &a)
{
	char buf[1024]={'\0'};

	in>>buf;
	a.lenth=strlen(buf);
	if(a.str) delete [] a.str;
	a.str=new char [a.lenth+1];
	strcpy(a.str,buf);

	return in;
}

ostream &operator << (ostream &out,hstring &a)
{
	if(a.str) out<<a.str;
	return out;
}

hstring &hstring::operator += (const hstring &a)
{
	if(a.str==NULL) return *this;

	int len=lenth+a.lenth;
	char *tmp=new char [len+1];

	if(str)
	{
		strcpy(tmp,str);
		int num=0;
		char *cur=a.str;
		while(*cur!='\0')
		{
			tmp[lenth+num]=*cur;
			cur++;
			num++;
		}
		tmp[lenth+num]='\0';
		str=tmp;
		lenth=len;
	}
	else
	{
		strcpy(tmp,a.str);
		str=tmp;
		lenth=len;
	}
	return *this;
}

int main()
{
	hstring s1="zhengkaifan";
	hstring s2="520520";

	operator << (operator<<(cout,s1),s2);
	cout<<endl;
	cout<<s1<<s2<<endl;
	cin>>s1>>s2>>endl;
	cout<<s1<<endl;
	cout<<s2<<endl;

	operator << (cout,s1);
	cout<<endl;

	cout<<s1.operator[](0);
	s1[0]='T';
	cout<<s1[0]<<endl;
	for(int i=0;s2[i]!='\0';i++)
		cout<<s2[i];
	cout<<endl;

	hstring s3,s4;
	s3+=s1;
	s3+=s2;
	s3.operator+=(s4);
	s3+= hstring("caoku");
	cout<<s3<<endl;
	return 0;
}