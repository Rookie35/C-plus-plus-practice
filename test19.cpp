#include<iostream>
#include<string>

using namespace std;

int main()
{
	string a="abc";
	string b="123";
	/*string c="bc";
	a.insert(1,b);
	cout<<a<<endl;
	a="abc";
	//cout<<a<<endl;
	a.replace(0,1,b);
	cout<<a<<endl;
	a="abc";
	cout<<a.find(b)<<" "<<a.find(c)<<endl;
	*/
	a.clear();
	b.erase(0,1);
	cout<<a<<endl<<b;
	return 0;
}
