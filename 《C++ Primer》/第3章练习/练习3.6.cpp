/*
 *��д һ�γ���ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X���� 
 */
 #include<iostream>
 #include<string>
 using namespace std;
 int main()
 {
 	string str="Hello World";
 	int num=str.size();
 	for (auto &c : str)//��Χfor��� 
 		c = 'X';
	 cout<<str<<endl;
	 return 0;  
  } 
