#include<iostream>

using std::cout;
using std::endl;

template<typename T>
T max(T x,T y)
{
	return x>y?x:y;
}

int main()
{
	int a=123,b=456;
	float c=12.3,d=45.6;
	char e='A',f='B';
	char s1[]="good",s2[]="better";
	
	cout<<max(a,b)<<endl;
	cout<<max(c,d)<<endl;
	cout<<max(e,f)<<endl;
	cout<<max(a,c)<<endl;
	cout<<max(s1,s2)<<endl;
	return 0;
}

