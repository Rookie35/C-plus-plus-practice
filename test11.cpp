#include <string>
#include<string.h>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

template <typename T>
T max(T a, T b)
{
	return a>b?a:b;
}
char *max(char *x, char *y)
{
	return strcmp(x, y) > 0 ? x :y;
}
int main()
{
	char *p="ABCD", *q="EFGH",*r;
	r=max(p, q);
	int a =max(10, 20);
	float b =max(10.5, 20.6);
	cout << r << endl;
	cout << a << endl;
	cout << b << endl;
	return 0;
}

